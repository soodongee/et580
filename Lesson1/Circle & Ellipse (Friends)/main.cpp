#include "Ellipse.h"


// Main function
int main() {
    Ellipse ellipse1(2, 3);  // Create an ellipse object with semi-major axis 2 and semi-minor axis 3
    Circle circle(1);  // Create a circle object with radius 1

    cout << ellipse1.area() << '\n';  // Print the area of the ellipse
    ellipse1.convert(circle);  // Convert the circle to an ellipse
    cout << ellipse1.area() << '\n';  // Print the area of the converted ellipse
    return 0;
}