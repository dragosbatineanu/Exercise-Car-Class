#include <iostream>
#include "Car.h"

using namespace std;

int main() {

    // Prompt the user to enter car details
    string make, model;
    int year;
    cout << "Enter the make of the car: ";
    getline(cin, make);
    cout << "Enter the model of the car: ";
    getline(cin, model);
    cout << "Enter the year of the car: ";
    cin >> year;

    // Create a Car object
    Car car(make, model, year);

    // Display the car details
    cout << "Car Details:" << endl;
    cout << "Make: " << car.getMake() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;

    // Start the car
    car.start();

    return 0;

}