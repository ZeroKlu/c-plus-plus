#include <iostream>
using namespace std;

int sum(int k)
{
    if (k < 1) return 0;
    return k + sum(k - 1); // Recursive call
}

int main()
{
    int result = sum(10);
    cout << result;
    
    return 0;
}