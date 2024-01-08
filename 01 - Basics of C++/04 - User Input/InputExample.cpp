#include <iostream>
using namespace std;

int main()
{
    string txt;
    cout << "Enter some text: ";
    getline(cin, txt);
    cout << "You entered: " << txt <<endl;

    int x, y;
    cout << "Enter a number: ";
    cin >> x;
    cout << "You entered: " << x << endl;
    cout << "Enter another number: ";
    cin >> y;
    cout << "You entered: " << y << endl;
    cout << x << " + " << y << " = " << x + y << endl;

    return 0;
}