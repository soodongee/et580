//Overall, this example illustrates how inheritance allows classes to inherit and extend properties and
//methods from other classes, promoting code reuse and providing a foundation for object-oriented design.

#include "Student.h"  // Include the Student class definition
#include "Person.h"   // Include the Person class definition

int main() {
    // Create a Person object using the parameterized constructor
    Person person("John", "Doe", "12345");

    // Create a Student object using the parameterized constructor with Person object
    Student student1(person, "Computer Science", 2023);

    // Create another Student object using the parameterized constructor
    Student student2("Alice", "Smith", "67890", "Biology", 2022);

    // Demonstrate the inheritance and polymorphism
    cout << "Person Information:" << endl;
    person.printInfo();  // Call the printInfo() method of the Person class

    cout << "\nStudent 1 Information:" << endl;
    student1.printInfo();  // Call the overridden printInfo() method of the Student class

    cout << "\nStudent 2 Information:" << endl;
    student2.printInfo();  // Call the overridden printInfo() method of the Student class

    return 0;
}