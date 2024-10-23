#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car
{
public:
    Car(string make, string model, int year);
    void display();
private:
    string make;
    string model;
    int year;
};

#endif
