#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // 1. Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called" << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called for " << name << endl;
    }

    // 3. Copy Constructor
    Student(const Student& obj) {
        name = obj.name;
        age = obj.age;
        cout << "Copy constructor called for " << name << endl;
    }

    // Member function
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // 4. Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    cout << "Creating object s1:" << endl;
    Student s1;                 // Default constructor
    s1.display();

    cout << "\nCreating object s2:" << endl;
    Student s2("Alice", 20);    // Parameterized constructor
    s2.display();

    cout << "\nCreating object s3:" << endl;
    Student s3(s2);             // Copy constructor
    s3.display();

    cout << "\nEntering local scope:" << endl;
    {
        Student s4("Bob", 22);
        s4.display();
    }   // Destructor for s4 is called here

    cout << "\nEnd of main()" << endl;

    return 0;
}   // Destructors for s3, s2, and s1 are called in reverse order