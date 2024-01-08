#include <iostream>
using namespace std;

// You can assign default values for parameters
void myFunction(string country = "United States")
{
    cout << "The country is: " << country << endl;
}

int main()
{
    // Because we have a default value, the argument is optional
    myFunction();
    myFunction("Mexico");
    
    return 0;
}

// Note: Once one parameter has a default value, all subsequent parameters must have default values as well
