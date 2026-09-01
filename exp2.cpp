#include <iostream>
using namespace std;
class student {
    public :
    string name;
    int RollNum;
    int grade;
    void input (){
        cout << "Enter name :";
        cin >> name;
        cout << "Enter Roll Number :";
        cin >> RollNum;
        cout << "Enter grade :";
        cin >> grade;
    }
    void display (){
        cout << "Name : " << name << endl;
        cout << "Roll Number : " << RollNum << endl;
        cout << "Grade : " << grade << endl;
    }
    void display (string name ){
        cout << "Name : " << name << endl;
        
    }
};