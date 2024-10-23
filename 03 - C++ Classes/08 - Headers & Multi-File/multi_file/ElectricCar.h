#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Car.h"
#include "Battery.h"

class ElectricCar : public Car
{
public:
    ElectricCar(string make, string model, int year, int charge=0);
    void charge(int amount=0);
    void showCharge();
    void display();
private:
    Battery battery;
};

#endif