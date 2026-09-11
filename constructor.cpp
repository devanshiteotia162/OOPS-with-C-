#include <iostream>
#include <string>
using namespace std;

class student {
    string name;
    int marks;
    public:
    student (string n, int m) {
        name = n;
        marks = m;
    }
    student(){
        cout<<"Default Constructor"<<endl;
    }
    student (const student &s) {
        name = s.name;
        marks = s.marks;
    }
};
int main(){
    student s1("Vikas",40);
    student s2=s1;
}