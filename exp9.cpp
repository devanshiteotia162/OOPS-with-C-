#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void read() {
        cout << "Enter roll no: ";
        cin >> roll;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << roll << " " << name << " " << marks << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    
    Student *s = new Student[n];

    
    for (int i = 0; i < n; i++) {
        cout << " Student " << i + 1 << endl;
        s[i].read();
    }

    
    cout << "\nStudent Records:\n";

    for (int i = 0; i < n; i++) {
        s[i].display();
    }

    
    Student *highest = &s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > highest->marks) {
            highest = &s[i];
        }
    }

    cout << "Student with Highest Marks: "<< endl;;
    highest->display();

   
    delete[] s;

    return 0;
}