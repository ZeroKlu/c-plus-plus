#include <iostream>
using namespace std;

int main()
{
    try {
        int age;
        cout << "Enter your age: ";
        cin >> age;
        if (age >= 18  && age < 65) {
            cout << "Access granted - you are old enough.";
        } else {
            // In an error situation, you can throw an error code
            if (age > 65) throw -2;
            throw -1;
        }
    }
    catch (int err) {
        switch (err)
        {
            case -1:
                cout << "Access denied! Underage!";
                break;
            case -2:
                cout << "Access denied! Too old!";
                break;
            default:
                cout << "Access denied! (unknown error)";
                break;
        }
    }
    
    return 0;
}