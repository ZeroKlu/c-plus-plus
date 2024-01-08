#include <iostream>
using namespace std;

// Base class
class Employee {
    protected: // Protected access specifier
        int salary;
};

// Derived class
class Programmer: public Employee {
    public:
        int bonus;
        void setSalary(int s) {
            // Because this is a derived class, I can access the protected salary attribute
            salary = s;
        }
        int getSalary() {
            return salary;
        }
};

int main()
{
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getSalary() << endl;
    cout << "Bonus: " << myObj.bonus << endl;
    
    return 0;
}