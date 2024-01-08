#include <iostream>
using namespace std;

int main()
{
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // You get the count of characters in the string using the string.length() function
    cout << "String [" << txt << "] is " << txt.length() << " characters long." << endl;

    // The string.size() function is an alias for string.length() and can be used interchangeably
    cout << "String [" << txt << "] is " << txt.size() << " characters long." << endl;

    return 0;
}