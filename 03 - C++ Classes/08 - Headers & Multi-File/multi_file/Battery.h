#ifndef BATTERY_H
#define BATTERY_H

class Battery
{
    public:
        Battery(int capacity=100);
        void recharge(int amount=0);
        void displayCharge();
    private:
        int charge = 0;
        int capacity = 100;
};

#endif