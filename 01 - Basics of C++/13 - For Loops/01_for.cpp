#include <iostream>
using namespace std;

int main()
{
    // The for loop declares the counter, condition, and increment expressions in the loop itself
    // Syntax:      for(variable; condition; increment) { code_block }
    for (int i = 0; i < 10; ++i)
    {
        // Note: Because the increment takes place at the end of the iteration, it doesn't
        //       matter whether I pre- or post-fix the increment operator.
        cout << i + 1 << endl;
    }

    cout << "--------------------------------" << endl;

    // You can increment by any amount:
    for (int i = 0; i < 10; i += 2)
    {
        cout << i + 2 << endl;
    }

    cout << "--------------------------------" << endl;

    // You can decrement as well
    for (int i = 10; i > 0; i--)
    {
        cout << i << endl;
    }

    cout << "--------------------------------" << endl;

    // You can nest for loops
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << i << ", " << j << endl;
        }
    }
    
    return 0;
}