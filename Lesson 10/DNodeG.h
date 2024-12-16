#ifndef DNODEG_H_
#define DNODEG_H_

#include "Entry.h"  // Include the Entry class

template <typename K, typename V>
class DNodeG {
public:
    Entry<K, V> elem;
    DNodeG<K, V>* next;
    DNodeG<K, V>* prev;

    // Default constructor with optional parameters for initial values
    DNodeG(const Entry<K, V>& element = Entry<K, V>(), DNodeG<K, V>* nextNode = nullptr, DNodeG<K, V>* prevNode = nullptr)
        : elem(element), next(nextNode), prev(prevNode) {}

    // Disable copy and move semantics for safety, unless you explicitly want to support them
    DNodeG(const DNodeG& other) = delete;             // Copy constructor
    DNodeG& operator=(const DNodeG& other) = delete;  // Copy assignment
    DNodeG(DNodeG&& other) = delete;                  // Move constructor
    DNodeG& operator=(DNodeG&& other) = delete;       // Move assignment
};

#endif // DNODEG_H_
