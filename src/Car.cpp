#include "Car.h"
#include "iostream"

#include "Car.h"

// Constructor to initialize car details
Car::Car(const std::string& m, const std::string& mod, int y)
    : make(m), model(mod), year(y) {}

// Setter methods
void Car::setMake(const std::string& m) {
    make = m;
}

void Car::setModel(const std::string& m) {
    model = m;
}

void Car::setYear(int y) {
    year = y;
}

// Getter methods
std::string Car::getMake() const {
    return make;
}

std::string Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

// Method to start the car
void Car::start() const {
    std::cout << "The car has started." << std::endl;
}