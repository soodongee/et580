
#ifndef GLINKEDLIST_H_
#define GLINKEDLIST_H_

#include <iostream>


#include "GNode.h"
using namespace std;

template<typename T>
class GLinkedList { // a linked list of strings

public:
    GLinkedList(); // empty list constructor
    ~GLinkedList(); // destructor
    bool empty() const; // is list empty?
    const T& front() const; // get front element
    void addFront(const T& e); // add to front of list
    void removeFront(); // remove front item list

    void print();

private:
    GNode<T> *head; // pointer to the head of list
};

#endif /* GLINKEDLIST_H_ */