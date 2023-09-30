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
    Student student1("Alice", 20, 3.8);
    Student student2("Bob", 21, 3.5);

    // Access and display information using member functions
    cout << "Student 1 Information:" << endl;
    student1.displayInfo();

    cout << "\nStudent 2 Information:" << endl;
    student2.displayInfo();

    return 0;
}
