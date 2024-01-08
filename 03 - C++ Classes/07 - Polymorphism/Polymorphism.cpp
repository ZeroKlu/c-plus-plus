#include <iostream>
using namespace std;

// Base class
class Animal {
    public:
        void animalSound() {
            cout << "The animal makes a sound... \n";
        }
};

// Derived class
class Pig : public Animal {
    public:
        // Using polymorphism, we override the method to be specific to the individual, derived classes
        void animalSound() {
            cout << "The pig says: oink oink! \n";
        }
};

// Derived class
class Dog : public Animal {
    public:
        void animalSound() {
            cout << "The dog says: bow wow! \n";
        }
};

int main()
{
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    
    return 0;
}