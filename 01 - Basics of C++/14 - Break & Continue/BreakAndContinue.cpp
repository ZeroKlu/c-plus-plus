#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    while (true)
    {
        i++;
        cout << i << endl;
        if (i == 5){
            // The break command immediately exits the blok and terminates the loop
            break;
        }
    }

    for (int i = 0; i <= 10; i++)
    {
        if (i <= 5){
            // The continue command immediately exits the block but continues to the next loop iteration
            continue;
        }
        cout << i << endl;
    }
    
    return 0;
}