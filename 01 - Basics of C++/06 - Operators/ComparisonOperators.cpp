#include <iostream>
using namespace std;

int main()
{
    int x = 5, y = 3;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // Equal (==)
    cout << "Equal (==):            " << x << " == " << y << " ? " << (x == y) << endl;

    // Not Equal (==)
    cout << "Not Equal (!=):        " << x << " != " << y << " ? " << (x != y) << endl;

    // Greater Than (>)
    cout << "Greater Than (>):      " << x << " > " << y << "  ? " << (x > y) << endl;

    // Less Than (<)
    cout << "Less Than (<):         " << x << " < " << y << "  ? " << (x < y) << endl;

    // Greater or Equal (>=)
    cout << "Greater or Equal (>=): " << x << " >= " << y << " ? " << (x >= y) << endl;

    // Less or Equal (<=)
    cout << "Less or Equal (<=):    " << x << " <= " << y << " ? " << (x <= y) << endl;

    return 0;
}