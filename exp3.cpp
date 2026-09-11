#include <iostream>
using namespace std;
class Student
{
    public:
    string name;
    int rollno;
    int per;
    void display(string name, int rollno, int per)
    {
        this->name=name;
        this->rollno=rollno;
        this->per=per;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number: "<<rollno<<endl;
        cout<<"Percentage: "<<per<<endl;
    }

    void display(string name, float rollno, float per)
    {
        this->name=name;
        this->rollno=rollno;
        this->per=per;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number: "<<rollno<<endl;
        cout<<"Percentage: "<<per<<endl;
    }

    void display(string name, int rollno)
    {
        this->name=name;
        this->rollno=rollno;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number: "<<rollno<<endl;
    }
};
int main(){
    Student s;
    s.display("Devanshi", 22, 95);
    s.display("Aditya", 14, 90);
    s.display("Trigusta ", 50, 85);
    return 0;
}



