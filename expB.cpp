#include <iostream>
#include <string>
using namespace std;
class student{
    private:
    int rollno;
    string name ;
    double cgpa;
    public :
    student (int r , string n){
    rollno = r;
    name = n;
    cgpa = 0.0;
    }
    student (int r , string n , double c){
        rollno = r;
        name = n;
        cgpa = c;

    }

};