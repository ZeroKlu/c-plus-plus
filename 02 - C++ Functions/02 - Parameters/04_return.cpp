#include <iostream>
using namespace std;

// To return a value from a function, we need to declare the function with a return type
int myFunction(int x)
{
    // Then we return the value
    return 5 + x;
}

// Side note: I can overload the function name as long as there is a different argument signature
int myFunction(int x, int y)
{
    return x + y;
}

int main()
{
    int res = myFunction(3);
    cout << res << endl;

    res = myFunction(3, 5);
    cout << res << endl;
    
    return 0;
}