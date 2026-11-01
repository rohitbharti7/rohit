#include <iostream>                  // Header file for input and output
using namespace std;                 // Use standard namespace

// Function to accept array elements from the user
void inputArray(int a[], int n) {
    cout << "Enter " << n << " elements:\n"; // Ask user to enter array elements

    // Loop to read array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];                 // Store each element in the array
    }
}

// Function to display array elements
void displayArray(int a[], int n) {
    cout << "Array elements are: ";  // Display message

    // Loop to print all array elements
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";         // Print each array element
    }

    cout << endl;                    // Move to the next line
}

// Function to swap two elements using reference variables
void swapElements(int &x, int &y) {
    int temp = x;                    // Store value of x in temporary variable
    x = y;                           // Assign value of y to x
    y = temp;                        // Assign temporary value to y
}

// Function to sort array elements using Bubble Sort
void sortArray(int a[], int n) {

    // Outer loop controls the number of passes
    for (int i = 0; i < n - 1; i++) {

        // Inner loop compares adjacent elements
        for (int j = 0; j < n - i - 1; j++) {

            // Check whether the current element is greater than the next element
            if (a[j] > a[j + 1]) {

                // Swap elements if they are in the wrong order
                swapElements(a[j], a[j + 1]);
            }
        }
    }
}

// Main function starts
int main() {
    int n;                           // Declare variable for array size

    cout << "Enter the size of array: "; // Ask user to enter array size
    cin >> n;                        // Read array size

    int a[n];                        // Declare an array of size n

    inputArray(a, n);                // Call function to accept array elements

    cout << "\nBefore Sorting:\n";   // Display message before sorting
    displayArray(a, n);              // Display original array

    sortArray(a, n);                 // Call function to sort the array

    cout << "\nAfter Sorting:\n";    // Display message after sorting
    displayArray(a, n);              // Display sorted array

    return 0;                        // End the program successfully
}
