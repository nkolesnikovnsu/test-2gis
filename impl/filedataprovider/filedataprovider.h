#ifndef filedataprovider_h
#define filedataprovider_h

#include <exception>
#include <string>
#include "dataprovider.h"

namespace test_app {

class FileDataProvider : public DataProvider {
public:
    FileDataProvider(const std::string &filename)
    : _filename(filename) {}
    
    virtual void provide();
    
    ~FileDataProvider() {}
    
private:
    std::string _filename;
};

} //namespace test_app

#endif /* filedataprovider_h */
