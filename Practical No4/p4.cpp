
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

    // Function to display the complex conjugate
    void displayConjugate()
    {
        cout << "Complex Number: " << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        // Complex conjugate changes the sign
        // of the imaginary part
        cout << "\nComplex Conjugate: " << real;

        if (imag >= 0)
            cout << " - " << imag << "i";
        else
            cout << " + " << -imag << "i";

        cout << endl;
    }
};

// Main function
int main()
{
    Complex c;

    // Create an object and call functions
    c.getData();
    c.displayConjugate();

    return 0;
}
