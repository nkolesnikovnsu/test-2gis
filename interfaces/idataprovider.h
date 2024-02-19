#ifndef idataprovider_h
#define idataprovider_h

#include <exception>

namespace test_app {
	
class IDataProvider {
public:
    virtual void provide() = 0;
    virtual ~IDataProvider() {};
};

} //namespace test_app

#endif /* idataprovider_h */
