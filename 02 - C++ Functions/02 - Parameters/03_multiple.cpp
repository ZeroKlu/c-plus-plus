#include <iostream>
using namespace std;

void myFunction(string fname, int age)
{
    cout << fname << " is " << age << " years old. \n";
}

int main()
{
    myFunction("Scott", 53);
    
    return 0;
}