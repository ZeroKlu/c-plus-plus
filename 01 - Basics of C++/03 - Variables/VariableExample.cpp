#include <iostream>
using namespace std;

/*
    The general rules for naming variables are:

    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (like C++ keywords, such as int) cannot be used as names
 */

int main()
{
    int num = 10;
    cout << num << endl;

    num = 15;
    cout << num << endl;

    double flt = 5.99;
    cout << flt << endl;

    char letter = 'a';
    cout << letter << endl;

    string text = "howdy";
    cout << text << endl;

    bool logic = false;
    cout << logic << endl << endl;

    cout << "(" << num << ", " << flt << ", " << letter << ", " << text << ", " << logic << ")" << endl;

    int num2 = 10;
    cout << num + num2 << endl;

    int x = 5, y = 6, z = 50;
    cout << x + y + z << endl;

    int a, b, c;
    a = b = c = 50;
    cout << a + b + c;

    const float PI = 3.14159;

    return 0;
}