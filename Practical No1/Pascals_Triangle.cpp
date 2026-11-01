#include <iostream>              // Header file for input and output
using namespace std;             // Use standard namespace

int main() {                     // Main function starts
    int n;                       // Declare variable to store number of rows

    cout << "Enter number of rows: "; // Ask the user to enter number of rows
    cin >> n;                    // Read number of rows from the user

    // Outer loop controls the number of rows
    for (int i = 0; i < n; i++) {

        int value = 1;           // Initialize the first value of each row to 1

        // Print spaces to create pyramid shape
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";         // Print a space
        }

        // Inner loop prints the values in each row
        for (int j = 0; j <= i; j++) {

            cout << value << " "; // Print the current value

            // Calculate the next value using Pascal's Triangle formula
            value = value * (i - j) / (j + 1);
        }

        cout << endl;            // Move to the next line after each row
    }

    return 0;                    // End the program successfully
}
