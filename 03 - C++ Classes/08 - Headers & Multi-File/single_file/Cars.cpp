#include <iostream>

using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;
public:
    Car(string make, string model, int year)
    {
        this->make = make;
        this->model = model;
        this->year = year;
    }
    void display()
    {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Battery
{
private:
    int charge = 0;
    int capacity = 100;
public:
    void recharge(int amount=0)
    {
        if (amount == 0)
            charge = capacity;
        else
            charge += amount;
    }
    void displayCharge()
    {
        cout << "Charge: " << charge << endl;
        cout << "Capacity: " << capacity << endl;
    }
};

// ElectricCar: Inheritance from Car   -> Is a Car
//              Composition of Battery -> Has a Battery
class ElectricCar : public Car
{
private:
    Battery battery;
public:
    ElectricCar(string make, string model, int year) : Car(make, model, year) {}
    void charge(int amount=0)
    {
        battery.recharge(amount);
    }
    void showCharge()
    {
        battery.displayCharge();
    }
};

int main()
{
    ElectricCar car("Nissan", "Leaf", 2015);

    car.display();

    car.showCharge();

    car.charge(25);

    car.showCharge();

    car.charge();

    car.showCharge();

    return 0;
}