#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter your first name: ";
    // Use cin to get an input from the user
    // WARNING: cin sees any whitespace character as a terminator, so you can only enter one word
    cin >> name;
    cout << "Your name is " << name << endl;

    // This little trick is just clearing the input buffer so we can read from the user a second time
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    cout << "Enter your full name: ";
    // The getline() function allows entering multiple words
    // It also doesn't require the buffer-clearing trick
    getline(cin, name);
    cout << "Your name is " << name << endl;

    return 0;
}