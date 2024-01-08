#include <iostream>
using namespace std;

int main()
{
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // In C++, strings are objects, not character arrays, but they can still be accessed by index
    // Indices are zero-based
    cout << txt[2] << txt[14] << txt[14] << txt[11] << endl << endl;

    // You can replace a given character using the index and a single-quoted character
    txt[14] = 'o';
    txt[11] = 'l';
    cout << txt[2] << txt[14] << txt[14] << txt[11] << endl;

    return 0;
}