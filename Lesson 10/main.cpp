#include <iostream>
#include "ListPriorityQueueSTL.h"
#include "Point2DSTL.h"
#include "PriorityQueueException.h"


int main() {
    ListPriorityQueueSTL<Point2DSTL, LeftRight, PriorityQueueException> PList;

    // Add 5 points
    PList.insert(Point2DSTL(9, 10));
    PList.insert(Point2DSTL(5, 6));
    PList.insert(Point2DSTL(3, 4));
    PList.insert(Point2DSTL(7, 8));
    PList.insert(Point2DSTL(1, 2));

    // Find and print the minimum value
    std::cout << "Min: " << PList.min() << std::endl;

    // Remove the minimum value
    PList.removeMin();

    // Find and print the new minimum value
    std::cout << "Min after removeMin: " << PList.min() << std::endl;

    std::cout << "Min: " << PList.min() << std::endl;

    PList.removeMin();

    std::cout << "Min after removeMin: " << PList.min() << std::endl;

    //print size
    std::cout << "Queue size: " << PList.size() << std::endl;



    return 0;
}
