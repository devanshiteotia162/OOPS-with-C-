// write a c++ program to store the salary of ten employees in a vector, use range based for loop with auto to display the following information: 
// 1.all employee salaries 
// 2. toal salary of all employees
// 3. highest salary among all employees
// 4. count how many employees have salary more than 50000
// 5. avg salary of all employees

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<double> salary ={45000.0, 55000.0, 60000.0, 40000.0, 70000.0, 50000.0, 65000.0, 45000.0, 75000.0, 55000.0};
    double totalSalary = 0.0;
    double highestSalary = salary[0];
    int count = 0;
    cout<<"Employee Salaries:"<<endl;
    for(double value:salary)
    {
        cout<<value<<endl;
        totalSalary += value;
        if(value > highestSalary)
        {
            highestSalary = value;
        }
        if(value > 50000.0)
        {
            count++;
        }
    }
    double avgSalary = totalSalary / salary.size();
    cout<<"Total Salary of all employees: " <<totalSalary<<endl;
    cout<<"Highest Salary of all employees: " <<highestSalary<<endl;
    cout<<"Number of employees with salary more than 50000: " <<count<<endl;
    cout<<"Average Salary of all employees: " <<avgSalary<<endl;
    return 0;
}