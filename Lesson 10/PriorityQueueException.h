#ifndef PRIORITYQUEUEEXCEPTION_H_
#define PRIORITYQUEUEEXCEPTION_H_

#include "RuntimeException.h"

class PriorityQueueException : public RuntimeException {
    public:
      PriorityQueueException(const std::string& err) : RuntimeException(err) {}
};

#endif