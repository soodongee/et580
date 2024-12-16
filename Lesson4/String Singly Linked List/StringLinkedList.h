
#ifndef STRINGLINKEDLIST_H_
#define STRINGLINKEDLIST_H_

#include "StringNode.h"
#include <iostream>
#include <string>
using namespace std;

class StringLinkedList { // a linked list of strings
private:
    StringNode* head; // pointer to the head of list

public:
    StringLinkedList(); // empty list constructor
    ~StringLinkedList(); // destructor
    bool empty() const; // is list empty?
    const string& front() const; // get front element
    void addFront(const string& e); // add to front of list
    void removeFront(); // remove front item list

    void print();


};

#endif /* STRINGLINKEDLIST_H_ */