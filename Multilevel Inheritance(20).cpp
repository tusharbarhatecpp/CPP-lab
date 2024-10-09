/*This C++ program demonstrates multilevel inheritance, 
   where a class is derived from another derived class*/
#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void vehicle() {
        cout << "I am a vehicle." << endl;
    }
};

// Derived class
class FourWheeler : public Vehicle {
public:
    void fourWheeler() {
        cout << "I have four wheels." << endl;
    }
};

// Derived class
class Car : public FourWheeler {
public:
    void car() {
        cout << "I am a car." << endl;
    }
};

int main() {
    Car myCar;

    // Invoking methods in the specified order
    myCar.car();          // Outputs: I am a car.
    myCar.fourWheeler();  // Outputs: I have four wheels.
    myCar.vehicle();      // Outputs: I am a vehicle.

return 0;
}