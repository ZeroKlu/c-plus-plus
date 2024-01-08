#include <iostream>
using namespace std;

int main()
{
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw (age);
        }
    }
    // The ... indicates that this catches any error (but does not allow you to handle the specific exception).
    catch (...) {
        cout << "Access denied - You must be at least 18 years old.\n";
    }
    
    return 0;
}