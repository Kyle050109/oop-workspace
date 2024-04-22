#ifndef FRIDGE_H
#define FRIDGE_H
#include"Appliance.h"
#include<iostream>
#include<string.h>
class Fridge: public Appliance{
    public:
    Fridge();
    Fridge(int powerRating, double volume);
    void setVolume(double volume);
    double getVolume();
    virtual double getPowerConsumption();
    protected:
    double volume;

};
#endif