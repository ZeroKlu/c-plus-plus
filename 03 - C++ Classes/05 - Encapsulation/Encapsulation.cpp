#include <iostream>
using namespace std;

class Car
{
    private:
        string brand;   
        string model;
        int year;

    public:
        Car(string mk, string mod, int yr)
        {
            brand = mk;
            model = mod;
            year = yr;
        }

        // These public functions encapsulate the private attributes (can have setters and/or getters)
        void setBrand(string mk) {brand = mk;}
        string getBrand() {return brand;}

        void setModel(string mod) {model = mod;}
        string getModel() {return model;}

        void setYear(int yr) {year = yr;}
        int getYear() {return year;}

        string name()
        {
            return to_string(year) + " " + brand + " " + model;
        }
};

int main()
{
    Car myCar("Ford", "Mustang", 1969);

    cout << myCar.name() << endl;

    myCar.setBrand("Dodge");
    myCar.setModel("Challenger");
    myCar.setYear(2014);
    
    cout << to_string(myCar.getYear()) << " ";
    cout << myCar.getBrand() << " ";
    cout << myCar.getModel() << endl;
    
    return 0;
}