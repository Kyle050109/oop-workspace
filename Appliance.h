#ifndef APPLIANCE_H
#define APPLIANCE_H
#include<iostream>
#include<string.h>

class Appliance{
    protected:
    int powerRating;
    bool isOn;
    public:
    Appliance();
    Appliance(int powerRating);
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
    int get_powerRating();
    bool get_isOn();
    void set_powerRating(int number);
    void set_isOn(bool on);
};
#endif