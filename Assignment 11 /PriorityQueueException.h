#ifndef PRIORITYQUEUEEXCEPTION_H
#define PRIORITYQUEUEEXCEPTION_H

#include "RuntimeException.h"

class PriorityQueueException : public RuntimeException {
public:
    PriorityQueueException(const std::string& err) : RuntimeException(err) {}
};

#endif
