#include <iostream>
using namespace std;

int main()
{
    string firstName = "John";
    string lastName = "Doe";

    // You can concatenate using the + operator
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;

    // Alternately, you can use the string.append() method
    string firstWithSpace = firstName.append(" ");
    fullName = firstWithSpace.append(lastName);
    cout << fullName << endl;

    // Because + is used for both addition and concatenation, you must make sure that
    //   both operands are the same type.
    cout << 15 + 20 << endl;                // Integer addition
    cout << ((string)"15" + "20") << endl;  // String concatenation
    // Note: the first operand must be a std::string, not just a literal for concatenation

    // This would cause an error:
    // cout << ((string)"15" + 20) << endl;

    return 0;
}