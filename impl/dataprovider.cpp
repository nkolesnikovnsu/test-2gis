#include "dataprovider.h"

namespace test_app {

void DataProvider::addDataConsumer(const std::shared_ptr<IDataConsumer> &dataConsumerPtr) {
    _dataConsumer.push_back(dataConsumerPtr);
}

const std::vector<std::shared_ptr<IDataConsumer>> & DataProvider::getDataConsumer() {
    return _dataConsumer;
}

} //namespace test_app
