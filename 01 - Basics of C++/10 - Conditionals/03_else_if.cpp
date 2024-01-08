#include <iostream>
using namespace std;

int main()
{
    int age = 20;
    int rentingAge = 21, votingAge = 18, drivingAge = 16;

    if (age >= rentingAge)
    {
        cout << "You drive, vote, and rent a car.";
    }    
    else if (age >= votingAge)
    {
        // The else-if block executes if everything above it is false, but its condition is true
        cout << "You can drive and vote, but you can't rent a car.";
    }
    else if (age >= drivingAge)
    {
        // You can have as many else-if blocks as you need
        cout << "You can drive, but you can't vote or rent a car.";
    }
    else
    {
        // The else block only executes if all of the above conditions are false
        cout << "You can't drive, vote, or rent a car.";
    }
  
    return 0;
}
