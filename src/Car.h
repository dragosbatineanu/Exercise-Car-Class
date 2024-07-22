#pragma once
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    // Constructor to initialize car details
    Car(const std::string& m, const std::string& mod, int y);

    // Setter methods
    void setMake(const std::string& m);
    void setModel(const std::string& m);
    void setYear(int y);

    // Getter methods
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;

    // Method to start the car
    void start() const;


};