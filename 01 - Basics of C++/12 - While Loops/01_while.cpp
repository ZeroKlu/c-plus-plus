#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    // The while loop will iterate as long as the condition is true
    // If the condition is initially false, the loop will not iterate at all
    while (i < 10)
    {
        // Make sure there is a way for the condition to become false to prevent an infinite loop
        cout << ++i << endl;
        // Note: Above, I am using a prefix increment operator to make sure i increments before it prints
    }
    
    return 0;
}