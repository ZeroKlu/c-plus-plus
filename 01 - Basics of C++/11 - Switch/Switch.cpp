#include <iostream>
using namespace std;

int main()
{
    int day = 3;

    // When you're only comparing values of a single expression, a switch is a more efficient
    //   way to code a series of if/if-else/else statements
    switch (day)
    {
        // The first case is like the if statement
        case 1:
            cout << "Monday";
            // The break command keeps the code from falling into the next case and is required
            break;
        // The rest of the cases are like if-else statements
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        // The default is like the else statement
        default:
            cout << "Don't care! Not a workday!";
            break;
    }

    // WARNING: In C++, switch only supports short, byte, int, or char
    //          So resist the temptation to compare strings
    
    return 0;
}