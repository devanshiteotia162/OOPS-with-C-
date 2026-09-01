#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int RollNum;
    
    void input()
    {
        cout<<"Enter Student's name: ";
        getline(cin,name);
        cout<<"Enter roll number: ";
        cin>>RollNum;
    }
    void display()
    {
        cout<<"Name of student: "<<name<<endl;
        cout<<"Roll number: "<<RollNum<<endl;
    }
    void displayGrade(int marks)
    {
       if(marks>=60)
       cout<<"1st Division";
       else if(marks>=50 && marks<60)
       cout<<"2nd Division";
       else if(marks>=33 && marks<50)
       cout<<"3rd Division";
       else if(marks<=33)
       cout<<"Fail";
    }
};
int main()
{
    Student s;
    s.input();
    s.display();
    int marks;
    cin>>marks;
    s.displayGrade(marks);
    return 0;
}

