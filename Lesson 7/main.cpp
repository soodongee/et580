#include "NodeListG.h"
#include <iostream>


int main() {
    NodeListG<int> list;

    list.insertFront(3);
    list.insertFront(9);
    list.insertFront(12);
    
    list.eraseBack();
    list.eraseFront();

   
    for (Iterator<int> it = list.begin(); it != list.end(); ++it) {
        std::cout << *it << std::endl;
    }

    
    return 0;
    
}
