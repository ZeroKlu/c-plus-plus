#include <iostream>
using namespace std;

int main()
{
    // C++ supports multidimensional arrays
    string letters2d[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    cout << letters2d[1][2] << endl << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << letters2d[i][j] << endl;
        }
    }
    cout << endl;

    string letters3d[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },
        {
            { "E", "F" },
            { "G", "H" }
        }
    };

    cout << letters3d[1][0][1] << endl << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << letters3d[i][j][k] << endl;
            }
        }
    }
    
    return 0;
}