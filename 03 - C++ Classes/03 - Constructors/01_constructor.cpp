#include <iostream>
using namespace std;

class Car {
    public:
        string brand;   
        string model;
        int year;

        // Constructor
        Car(string mk, string mod, int yr)
        {
            brand = mk;
            model = mod;
            year = yr;
        }

        string name()
        {
            return to_string(year) + " " + brand + " " + model;
        }
};

int main()
{
    // Call the constructor to create the object and assign to the variable
    Car myCar1 = Car("Ford", "Mustang", 1969);

    cout << myCar1.name() << endl;

    // In C++, we can omit the assignment operator and pass the constructor arguments directly on the variable name
    Car myCar2("Dodge", "Challenger", 2014);

    cout << myCar2.name() << endl;
    
    return 0;
}