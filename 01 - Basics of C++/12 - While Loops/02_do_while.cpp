#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    // Like while, a do-while loop will iterate as long as the condition is true
    do
    {
        cout << ++i << endl;
    }
    while (i < 10);
    // But a do-while loop evaluates the condition after executing the iteration
    // ... so it will always execute at least once, even if the condition is initially false
    
    return 0;
}