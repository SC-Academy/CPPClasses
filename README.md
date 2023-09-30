## C++ Classes and Objects Example

This example demonstrates how to create classes and objects in C++, two key concepts in Object Oriented Programming.

## Getting Started
### Prerequisites

You need a C++ compiler to build and run this program. If you don't have one installed, you can download and install one like [g++](https://gcc.gnu.org/).

### Or Use IDE
1. Download and install CodeBlocks or any C++ IDE if you do not already have it installed.
2. Download the main.cpp file.
3. Add it to your C++ project.
4. Run the project application.


### Code Explanation

The first two lines, `#include <iostream>` and `#include <string>`, include the necessary header files for using input/output and string operations.

The third line, `using namespace std;`, tells the compiler to use the standard namespace, which contains many common functions and classes.

The next section of code defines the `Student` class. This class has three private data members: `name`, `age`, and `gpa`. It also has one public member function: `displayInfo()`.

The `Student()` constructor initializes the data members of the `Student` object. The `displayInfo()` function prints the student's information to the console.

The `main()` function creates two `Student` objects: `student1` and `student2`. It then calls the `displayInfo()` function on each object to print their information to the console.

````
#include <iostream>
#include <string>

using namespace std;

// Define a class called 'Student'
class Student {
private:
    // Private data members
    string name;
    int age;
    double gpa;

public:
    // Constructor to initialize the object
    Student(string n, int a, double g) : name(n), age(a), gpa(g) {}

    // Public member function to display student information
    void displayInfo() {
        cout << "Name: " << name << endl
        	"Age: " << age << endl
        	"GPA: " << gpa << endl;
    }
};

int main() {
    // Create two Student objects
    Student student1("Sammy", 20, 3.8);
    Student student2("Bob", 28, 3.5);

    // Access and display information using member functions
    cout << "Student 1 Information:" << endl;
    student1.displayInfo();

    cout << "\nStudent 2 Information:" << endl;
    student2.displayInfo();

    return 0;
}

````

Output: </br> </br>
Student 1 Information: </br>
Name: Sammy </br>
Age: 20 </br>
GPA: 3.8 </br>

Student 2 Information: </br>
Name: Bob </br>
Age: 28 </br>
GPA: 3.5 </br>

### License
This code is licensed under the MIT License.


