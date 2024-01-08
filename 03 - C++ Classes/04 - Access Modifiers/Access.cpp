#include <iostream>
using namespace std;

class Car {
    // private members are only accessible from inside the class
    private:
        string brand;   
        string model;
        int year;

    // public members are accessible from outside the class
    public:
        Car(string mk, string mod, int yr)
        {
            brand = mk;
            model = mod;
            year = yr;
        }

        // Here, the public function is used to display the private members, which cannot otherwise be accessed
        string name()
        {
            return to_string(year) + " " + brand + " " + model;
        }

    // protected members are accessible from within the class and inherited classes
};

int main()
{
    Car myCar("Ford", "Mustang", 1969);

    cout << myCar.name() << endl;
    
    return 0;
}