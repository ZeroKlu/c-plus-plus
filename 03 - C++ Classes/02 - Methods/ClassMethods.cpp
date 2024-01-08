#include <iostream>
using namespace std;

class Car {
    public:
        string brand;   
        string model;
        int year;
        // You can define a function entirely within the class
        string name()
        {
            return brand + " " + model;
        }
        // Or you can just declare the function and then define it outside the class
        string fullName();
};

// Implementation of function declared in class
string Car::fullName()
{
    return to_string(year) + " " + brand + " " + model;
}

int main()
{
    Car myCar;
    myCar.brand = "Ford";
    myCar.model = "Mustang";
    myCar.year = 1969;

    cout << myCar.name() << endl;
    cout << myCar.fullName() << endl;
    
    return 0;
}