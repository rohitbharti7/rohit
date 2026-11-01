
#include <iostream>
using namespace std;

// Base class
class BankAccount
{
public:
    // Virtual function to calculate interest
    virtual void calculateInterest()
    {
        cout << "Calculating bank account interest" << endl;
    }
};

// Derived class SavingsAccount
class SavingsAccount : public BankAccount
{
public:
    // Overriding the virtual function
    void calculateInterest()
    {
        float balance = 10000;
        float rate = 5;

        float interest = (balance * rate) / 100;

        cout << "Savings Account Interest: "
             << interest << endl;
    }
};

// Derived class CurrentAccount
class CurrentAccount : public BankAccount
{
public:
    // Overriding the virtual function
    void calculateInterest()
    {
        float balance = 20000;
        float rate = 3;

        float interest = (balance * rate) / 100;

        cout << "Current Account Interest: "
             << interest << endl;
    }
};

// Main function
int main()
{
    // Creating objects of derived classes
    SavingsAccount s;
    CurrentAccount c;

    // Base class pointer
    BankAccount *ptr;

    // Calling SavingsAccount function
    ptr = &s;
    ptr->calculateInterest();

    // Calling CurrentAccount function
    ptr = &c;
    ptr->calculateInterest();

    return 0;
}
