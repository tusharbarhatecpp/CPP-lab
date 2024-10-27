//This is C++ program it demonstrates basic data type to class type conversion.
#include <iostream>
using namespace std;

// Class to hold a distance value in meters
class Distance {
private:
    float meters;
    
public:
    // Constructor to initialize meters from a float value (basic data type)
    Distance(float m) {
        meters = m;
        cout << "Basic data type to class type conversion done." << endl;
    }
    
    // Function to display the distance
    void display() {
        cout << "Distance in meters: " << meters << "m" << endl;
    }
};

int main() {
    float basicValue = 20.80;

    // Basic data type to class type conversion
    Distance d = basicValue;  // Implicit conversion from float to Distance

    d.display();  // Display the converted value

return 0;
}
