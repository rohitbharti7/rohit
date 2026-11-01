
#include <iostream>
using namespace std;

// Base class to store employee personal details
class Employee
{
protected:
    int emp_id;
    string name;
    int age;

public:
    // Function to accept personal details
    void getPersonalDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Employee Age: ";
        cin >> age;
    }

    // Function to display personal details
    void displayPersonalDetails()
    {
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nEmployee Name: " << name;
        cout << "\nEmployee Age: " << age << endl;
    }
};

// Base class to store employee performance details
class Performance
{
protected:
    float score;

public:
    // Function to accept performance score
    void getPerformance()
    {
        cout << "Enter Performance Score (out of 100): ";
        cin >> score;
    }

    // Function to calculate performance grade
    void calculateGrade()
    {
        cout << "Performance Score: " << score << endl;

        if (score >= 90)
            cout << "Performance Grade: A";
        else if (score >= 75)
            cout << "Performance Grade: B";
        else if (score >= 60)
            cout << "Performance Grade: C";
        else if (score >= 40)
            cout << "Performance Grade: D";
        else
            cout << "Performance Grade: F";

        cout << endl;
    }
};

// Derived class using multiple inheritance
class EmployeeRecord : public Employee, public Performance
{
public:
    // Function to display complete employee record
    void displayRecord()
    {
        displayPersonalDetails();
        calculateGrade();
    }
};

// Main function
int main()
{
    // Create object of derived class
    EmployeeRecord e;

    // Accept employee personal details
    e.getPersonalDetails();

    // Accept employee performance details
    e.getPerformance();

    // Display complete employee record and grade
    cout << "\n----- Employee Details -----" << endl;
    e.displayRecord();

    return 0;
}
