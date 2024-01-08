#include <iostream>
using namespace std;

int main()
{
    bool x = true, y = false;

    cout << "x = " << x << endl;
    cout << "y = " << x << endl;

    // Logical AND (&&)
    cout << "Logical AND (&&): " << x << " && " << y << " = " << (x && y) << endl;

    // Logical OR (||)
    cout << "Logical OR (||):  " << x << " || " << y << " = " << (x || y) << endl;

    // Logical NOT (!)
    cout << "Logical NOT (!):      !" << x << " = " << !x << endl;

    return 0;
}