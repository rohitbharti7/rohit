
#include <iostream>
using namespace std;

// Class to manage bank account
class BankAccount
{
    float balance;

public:

    // Constructor to initialize bank balance
    BankAccount(float b)
    {
        balance = b;
    }

    // Function to withdraw money
    void withdraw(float amount)
    {
        try
        {
            // Check whether withdrawal amount exceeds balance
            if (amount > balance)
            {
                throw amount;
            }

            // Deduct amount from balance
            balance = balance - amount;

            cout << "Withdrawal Successful!" << endl;
            cout << "Remaining Balance: " << balance << endl;
        }

        // Catch the exception
        catch (float amount)
        {
            cout << "Exception Caught!" << endl;
            cout << "Insufficient Balance!" << endl;
            cout << "Withdrawal Amount: " << amount << endl;
            cout << "Available Balance: " << balance << endl;
        }
    }
};

// Main function
int main()
{
    // Create bank account with initial balance
    BankAccount b(5000);

    float amount;

    // Accept withdrawal amount
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    // Call withdrawal function
    b.withdraw(amount);

    return 0;
}
