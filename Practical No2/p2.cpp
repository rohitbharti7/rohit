#include <iostream>              // Header file for input and output
using namespace std;             // Use standard namespace

int main() {                     // Main function starts

    int sum = 0, i;               // Declare sum and loop variable i

    // Loop starts from 2 and continues up to 50 with increment of 2
    for (i = 2; i <= 50; i += 2) {

        cout << i << " ";         // Display each even number

        sum += i;                 // Add the current even number to sum
    }

    // Display the sum of all even numbers from 1 to 50
    cout << "\nSum of even numbers between 1 to 50 is: " << sum;

    return 0;                     // End the program successfully
}
