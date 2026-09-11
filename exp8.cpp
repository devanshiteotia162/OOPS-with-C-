#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void input() {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Passing objects as arguments
    // Returning an object from the function
    Complex add(Complex c) {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "\nEnter second complex number:" << endl;
    c2.input();

    // c2 is passed as an object argument
    // add() returns a Complex object
    c3 = c1.add(c2);

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}