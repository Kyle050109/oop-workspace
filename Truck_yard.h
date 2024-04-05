#ifndef TRUCK_YARD_H
#define TRUCK_YARD_H
#include "Truck.h"
class Truck_yard{
public:
    Truck_yard(); 
    Truck_yard(int capacity);
    ~Truck_yard();

    int get_total_stock_count();
    int get_stock_count(int code);
    Truck** get_current_stock_list();
    bool addStock(Truck* c); 

private:
    int capacity;
    int current_stock;
    Truck** stock;
};

#endif