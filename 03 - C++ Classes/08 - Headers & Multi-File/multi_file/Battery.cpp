#include "Battery.h"
#include <iostream>

using namespace std;

Battery::Battery(int capacity) : capacity(capacity) {}

void Battery::recharge(int amount) {
    if (amount == 0)
        charge = capacity;
    else
        charge += amount;
        if (charge > capacity)
            charge = capacity;
}

void Battery::displayCharge() {
    cout << "Charge:   " << charge << endl;
    cout << "Capacity: " << capacity << endl << endl;
}