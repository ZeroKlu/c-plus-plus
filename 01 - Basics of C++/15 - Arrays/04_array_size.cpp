#include <iostream>
using namespace std;

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    // This will get the size of the array in bytes, not elements
    int s = sizeof(myNumbers);
    cout << "Size: " << s << endl;

    // With a static-size element like int, you can calculate the length of the array
    int l = s / sizeof(int);
    cout << "Length: " << l << endl;

    for (int i = 0; i < l; i++)
    {
        cout << myNumbers[i] << endl;
    }

    // Warning! This won't work with variable-length elements, like strings
    //          So, we should use the for each method, which is better anyway
    string letters[] = { "a", "b", "c", "d", "e" };
    
    for (string s : letters)
    {
        cout << s << endl;
    }
    
    return 0;
}