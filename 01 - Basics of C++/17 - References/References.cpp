#include <iostream>
using namespace std;

int main()
{
    string food = "Pizza";
    string &meal = food;   // Reference is denoted with ampersand

    cout << food << endl;  // Outputs Pizza
    cout << meal << endl;  // Outputs Pizza

    cout << &food << endl; // Outputs memory address
    cout << &meal << endl; // Same memory address since meal was already a reference to food
    
    return 0;
}