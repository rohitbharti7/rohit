
#include <iostream>
#include <cstring>
using namespace std;

// Class to implement String
class String
{
    char *str;

public:

    // Constructor to allocate memory and initialize string
    String()
    {
        str = new char[100];
        str[0] = '\0';
        cout << "Constructor called." << endl;
    }

    // Function to accept a string from the user
    void Accept()
    {
        cout << "Enter a string: ";
        cin.getline(str, 100);
    }

    // Function to display the string
    void Display()
    {
        cout << "Entered String: " << str << endl;
    }

    // Destructor to release dynamically allocated memory
    ~String()
    {
        delete[] str;
        cout << "Destructor called. Memory released." << endl;
    }
};

// Main function
int main()
{
    // Creating an object of String class
    String s;

    // Calling Accept() function
    s.Accept();

    // Calling Display() function
    s.Display();

    return 0;
}
