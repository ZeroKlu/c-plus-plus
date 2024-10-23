#include "Car.h"
#include <iostream>

Car::Car(string make, string model, int year)
    : make(make), model(model), year(year) {}

void Car::display() {
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl << endl;
}