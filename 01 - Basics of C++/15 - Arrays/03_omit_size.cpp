#include <iostream>
using namespace std;

int main()
{
    // You can omit the size if you're declaring the content at the same time
    string cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (string car : cars)
    {
        cout << car << endl;
    }

    // Or you can specify the size but omit setting the values until later
    int nums[5];
    for (int i = 0; i < 5; i++)
    {
        nums[i] = i + 1;
        cout << nums[i] << endl;
    }
    
    return 0;
}