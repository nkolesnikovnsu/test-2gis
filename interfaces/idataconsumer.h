#ifndef idataconsumer_h
#define idataconsumer_h

#include <vector>

namespace test_app {
    
class IDataConsumer {
public:
    virtual void nextDataChunk(const std::vector<char> &dataChunk) = 0;
    virtual std::string result() = 0;
    virtual ~IDataConsumer() {};
};

} //namespace test_app

#endif /* idataconsumer_h */
