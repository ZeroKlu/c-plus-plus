#include <iostream>
using namespace std;

// Multiple functions can have the same name as long as the number and/or type of parameters are different.

int plusFunc(int x, int y)
{
    return x + y;
}

double plusFunc(double x, double y)
{
    return x + y;
}

int main()
{
    int myNum1 = plusFunc(8, 5);
    cout << "Int: " << myNum1 << endl;

    double myNum2 = plusFunc(4.3, 6.26);
    cout << "Double: " << myNum2;
    
    return 0;
}