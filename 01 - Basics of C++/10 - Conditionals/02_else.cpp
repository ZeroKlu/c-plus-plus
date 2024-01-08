#include <iostream>
using namespace std;

int main()
{
    int age = 16, voting_age = 18;

    if (age >= voting_age)
    {
        cout << "You can vote!";
    }
    else
    {
        // The else block executes when the if condition is false
        int wait = voting_age - age;
        cout << "You will be able to vote in " << wait << " years.";
    }

    return 0;
}