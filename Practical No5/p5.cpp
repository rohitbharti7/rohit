
#include <iostream>
using namespace std;

// Class to calculate volume
class Shape
{
public:

    // Function to calculate volume of a cube
    void volume(int side)
    {
        cout << "Volume of Cube = " << side * side * side << endl;
    }

    // Overloaded function to calculate volume of a cuboid
    void volume(int length, int breadth, int height)
    {
        cout << "Volume of Cuboid = "
             << length * breadth * height << endl;
    }
};

// Main function
int main()
{
    Shape s;

    // Variables for cube
    int side;

    // Variables for cuboid
    int length, breadth, height;

    // Input for cube
    cout << "Enter side of cube: ";
    cin >> side;

    // Calling volume() for cube
    s.volume(side);

    // Input for cuboid
    cout << "\nEnter length, breadth and height of cuboid: ";
    cin >> length >> breadth >> height;

    // Calling overloaded volume() for cuboid
    s.volume(length, breadth, height);

    return 0;
}
