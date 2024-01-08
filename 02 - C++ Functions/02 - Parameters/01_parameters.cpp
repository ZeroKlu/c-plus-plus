#include <iostream>
using namespace std;

void myFunction(string fname) {
    cout << fname << " is learning C++\n";
}

int main()
{
    myFunction("Scott");
    
    return 0;
}

// Terminology note: fname is the function parameter - "Scott" is the function argument