#include <iostream>
using namespace std;

// Call by value
void Data(int x)
{
    x = 50;
    cout << "Call by value: " << x << endl;
}

// Call by reference
void DataReference(int &x)
{
    x = 50;
    cout << "Call by reference: " << x << endl;
}

int main()
{
    int m = 100;
    Data(m);
    cout << "After call by value: " << m << endl;

    int n = 100;
    DataReference(n);
    cout << "After call by reference: " << n << endl;

    return 0;
}