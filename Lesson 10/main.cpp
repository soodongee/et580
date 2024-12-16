#include "NodeDictionaryG.h"
#include <iostream>
#include <string>

int main() {
    NodeDictionaryG<int, std::string> dictionary;

    // Testing put operation
    dictionary.put(1, "Apple");
    dictionary.put(2, "Banana");
    dictionary.put(3, "Cherry");

    std::cout << "Initial Dictionary:" << std::endl;
    for (auto it = dictionary.begin(); it != dictionary.end(); ++it) {
        std::cout << "Key: " << it.getNode()->elem.key() << ", Value: " << *it << std::endl;
    }

    // Testing find operation
    auto it = dictionary.find(2);
    if (it != dictionary.end()) {
        std::cout << "Found: " << *it << " at key 2." << std::endl;
    } else {
        std::cout << "Key 2 not found." << std::endl;
    }

    // Testing erase operation
    dictionary.erase(2);
    std::cout << "After erasing key 2:" << std::endl;
    for (auto it = dictionary.begin(); it != dictionary.end(); ++it) {
        std::cout << "Key: " << it.getNode()->elem.key() << ", Value: " << *it << std::endl;
    }

    return 0;
}
