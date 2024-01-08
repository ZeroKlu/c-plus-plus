#include <iostream>
using namespace std;

int main()
{
    // The ternary conditional operator allows a quick way to set one of two values based on a condition
    // Syntax:
    //   variable = (condition) ? expressionTrue : expressionFalse;

    int val = 20, cmp = 10;

    string str;

    // You could do this
    if (val > cmp)
    {
        str = "big";
    }
    else
    {
        str = "little";
    }
    cout << str << endl;

    // But for a simple scenario like this, the ternary operator is much more concise
    str = val > cmp ? "large" : "small";
    cout << str << endl;
    
    return 0;
}