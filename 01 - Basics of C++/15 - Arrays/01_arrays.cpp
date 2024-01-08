#include <iostream>
using namespace std;

int main()
{
    // Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
    // To declare an array, define the variable type, specify the name of the array followed by square brackets and specify
    //   the number of elements it should store:
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int nums[3] = {10, 20, 30};

    // Indices begin at zero and can be used to access array elements
    cout << cars[0] << endl;
    cout << nums[2] << endl;

    // Elements can be changed when accessed by index
    cars[0] = "Opel";
    nums[2] += 5;
    
    cout << cars[0] << endl;
    cout << nums[2] << endl;

    return 0;
}