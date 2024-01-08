#include <iostream>
using namespace std;

int main()
{
    string food = "Pizza";
    string* ptr = &food;

    // Output the value of food (Pizza)
    cout << food << endl;

    // Output the memory address of food (0x6dfed4)
    cout << &food << endl;

    // Access the memory address of food and output its value (Pizza)
    cout << *ptr << endl;

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << endl;

    // Output the new value of the food variable (Hamburger)
    cout << food << endl;
    
    return 0;
}