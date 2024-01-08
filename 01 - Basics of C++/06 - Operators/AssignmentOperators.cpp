#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y;

    cout << "set: x = " << x << endl;

    // Assignment (=)
    y = x;
    cout << "Assignment (=):                 y = x   : y = " << y << endl;

    // Addition Assignment (+=)
    y += x;
    cout << "Addition Assignment (+=):       y += x  : y = " << y << endl;

    // Subtraction Assignment (-=)
    y -= x;
    cout << "Subtraction Assignment (-=):    y -= x  : y = " << y << endl;

    // Multiplication Assignment (*=)
    y *= x;
    cout << "Multiplication Assignment (*=): y *= x  : y = " << y << endl;

    // Division Assignment (/=)
    y /= x;
    cout << "Division Assignment (/=):       y /= x  : y = " << y << endl;

    // Modulus Assignment (%=)
    y %= x;
    cout << "Modulus Assignment (%=):        y %= x  : y = " << y << endl;

    x = 15;
    y = 9;
    cout << "reset: x = " << x << endl;
    cout << "reset: y = " << y << endl;

    // Bitwise AND Assignment (&=)
    y &= x;
    cout << "Bitwise AND Assignment (&=):    y &= x  : y = " << y << endl;

    // Bitwise OR Assignment |&=)
    y |= x;
    cout << "Bitwise OR Assignment (|=):     y |= x  : y = " << y << endl;

    y = 9;
    cout << "reset: y = " << y << endl;

    // Bitwise XOR Assignment (^=)
    y ^= x;
    cout << "Bitwise OR Assignment (^=):     y ^= x  : y = " << y << endl;
    
    // Right Shift Assignment (>>=)
    y >>= 1;
    cout << "Right Shift Assignment (>>=):   y >>= 1 : y = " << y << endl;
    
    // Left Shift Assignment (<<=)
    y <<= 2;
    cout << "Left Shift Assignment (<<=):    y <<= 2 : y = " << y << endl;

    return 0;
}