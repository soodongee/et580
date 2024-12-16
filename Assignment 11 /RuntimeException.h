#ifndef RUNTIMEEXCEPTION_H_
#define RUNTIMEEXCEPTION_H_

#include <string>

class RuntimeException {
private:
    std::string errorMsg;
public:
    RuntimeException(const std::string& err) {
        errorMsg = err;
    }

    std::string getMessage() const {
        return errorMsg;
    }
};

#endif
