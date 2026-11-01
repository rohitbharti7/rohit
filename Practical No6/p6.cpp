
#include <iostream>
using namespace std;

// Class to represent a complex number
class Complex
{
    int real, imag;

public:

    // Function to input a complex number
    void getData()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Overloading unary minus (-) operator
    void operator -()
    {
        real = -real;
        imag = -imag;
    }

    // Function to display the complex number
    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

// Main function
int main()
{
    Complex c;

    // Input the complex number
    c.getData();

    // Display original complex number
    cout << "\nOriginal Complex Number: ";
    c.display();

    // Call overloaded unary minus operator
    -c;

    // Display negative complex number
    cout << "Negative Complex Number: ";
    c.display();

    return 0;
}
