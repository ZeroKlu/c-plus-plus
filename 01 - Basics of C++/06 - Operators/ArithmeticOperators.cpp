#include <iostream>
using namespace std;

int main()
{
    int x = 5, y = 4;

    // Addition (+)
    cout << "Addition (+):       " << x << " + " << y << " = " << x + y << endl;

    // Subtraction (-)
    cout << "Subtraction (-):    " << x << " - " << y << " = " << x - y << endl;

    // Multiplication (*)
    cout << "Multiplication (*): " << x << " * " << y << " = " << x * y << endl;

    // Division (/)
    // Note: Integer division will only return an integer, so we multiply by 1.0 to implicitly cast as a double
    //       We'll review explicit casting later
    cout << "Division (/):       " << x << " / " << y << " = " << 1.0 * x / y << endl;

    // Modulus (%)
    cout << "Modulus (%):        " << x << " % " << y << " = " << x % y << endl;

    // Increment (++)
    cout << "Increment (++):     " << x << " ++ " << " = " << x++ << endl;

    // Decrement (--)
    cout << "Decrement (--):     " << x << " -- " << " = " << x-- << endl;

    return 0;
}