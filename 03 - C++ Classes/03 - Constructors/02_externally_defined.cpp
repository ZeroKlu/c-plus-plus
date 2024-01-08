#include <iostream>
using namespace std;

class Car {
    public:
        string brand;   
        string model;
        int year;

        // Like functions, constructors can be implemented outside the class
        Car(string mk, string mod, int yr);

        string name()
        {
            return to_string(year) + " " + brand + " " + model;
        }
};

// External constructor implementation
Car::Car(string mk, string mod, int yr)
{
    brand = mk;
    model = mod;
    year = yr;
}

int main()
{
    Car myCar("Ford", "Mustang", 1969);

    cout << myCar.name() << endl;
    
    return 0;
}