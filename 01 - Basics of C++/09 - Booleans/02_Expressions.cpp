#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 9;
    cout << (x > y) << endl; // returns 1 (true), because 10 is higher than 9

    cout << (10 > 9) << endl; // returns 1 (true), because 10 is higher than 9

    cout << (x == 10) << endl;  // returns 1 (true), because the value of x is equal to 10

    cout << (10 == 15) << endl;  // returns 0 (false), because 10 is not equal to 15

    int myAge = 25;
    int votingAge = 18;
    cout << (myAge >= votingAge) << endl; // returns 1 (true), meaning 25 year olds are allowed to vote!

    // The typical way to use a boolean expression is to leverage some control (like if) that validates a condition
    if (myAge >= votingAge)
    {
        cout << "Old enough to vote!" << endl;
    }
    else
    {
        cout << "Not old enough to vote." << endl;
    }

    return 0;
}