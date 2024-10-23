#include "ElectricCar.h"

ElectricCar::ElectricCar(string make, string model, int year, int charge)
    : Car(make, model, year)
{
    if (charge > 0)
        battery.recharge(charge);
}

void ElectricCar::charge(int amount)
{
    battery.recharge(amount);
}

void ElectricCar::showCharge()
{
    battery.displayCharge();
}

void ElectricCar::display()
{
    Car::display();
    battery.displayCharge();
}