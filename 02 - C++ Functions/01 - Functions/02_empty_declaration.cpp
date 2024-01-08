#include <iostream>
using namespace std;

// Function declaration
void myFunction();

int main()
{
    myFunction();  // call the function
    
    return 0;
}

// Function definition (as long as it's declared first, it can be defined after it's called)
void myFunction() {
    cout << "I just got executed!" << endl;
}