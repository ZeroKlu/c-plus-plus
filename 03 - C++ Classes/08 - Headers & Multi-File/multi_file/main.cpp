#include "Car.h"
#include "ElectricCar.h"

int main()
{
    Car car("Ford", "Escort", 1986);

    car.display();

    ElectricCar eCar("Nissan", "Leaf", 2015, 25);

    eCar.display();
    
    eCar.charge(25);
    
    eCar.showCharge();
    
    eCar.charge();
    
    eCar.showCharge();

    return 0;
}
