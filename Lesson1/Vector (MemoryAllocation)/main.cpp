#include "Vector.h"  // Include the Vector class definition

int main() {
    Vector a(2);  // Create a Vector object 'a' with size 2
    a.printInfo(); // Print the elements of vector 'a'

    Vector b = a;  // Initialize vector 'b' with a copy of vector 'a'
    Vector c;      // Declare vector 'c' without specifying size (default size 10)
    c = a;          // Assign the elements of vector 'a' to vector 'c'

    c = a = b;      // Chain assignment: Assign elements of 'b' to 'a', then to 'c'

    c.printInfo();  // Print the elements of vector 'c'

    c.data[1] = 10; // Modify the element at index 1 of vector 'c'

    c.printInfo();  // Print the modified elements of vector 'c'
    a.printInfo();  // Print the elements of vector 'a'
    b.printInfo();  // Print the elements of vector 'b'

    return 0;       // Return 0 to indicate successful program execution
}