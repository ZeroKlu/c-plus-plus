#include <iostream>
using namespace std;

int main()
{
    int nums[5] = {10, 20, 30, 40, 50};

    // This iterates across a collection
    for (int i : nums) {
        cout << i << endl;
    }
    
    return 0;
}