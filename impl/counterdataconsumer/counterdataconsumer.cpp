#include "counterdataconsumer.h"
#include <sstream>

namespace test_app {
    
void CounterDataConsumer::nextDataChunk(const std::vector<char> &dataChunk) {
    if (_searchword.length() == 0) {
        return;
    }

    _buffer.insert(_buffer.end(), dataChunk.begin(), dataChunk.end());
    if (_buffer.size() >= _searchword.length()) {
        _counter += findWord(_buffer, _searchword);
        _buffer.erase(_buffer.begin(), _buffer.end() - (_searchword.length() - 1));
    }
}

std::string CounterDataConsumer::result() {
    return std::to_string(_counter);
}

int CounterDataConsumer::findWord(const std::vector<char> &buffer, const std::string &word) {
    // Yep, I known, this code is not very performant.
    std::string stringFromBuffer(buffer.begin(), buffer.end());
    int counter = 0;
    
    size_t position = stringFromBuffer.find(word);
    while (std::string::npos != position) {
        ++counter;
        position = stringFromBuffer.find(word, position + 1);
    }
    
    return counter;
}

} //namespace test_app
