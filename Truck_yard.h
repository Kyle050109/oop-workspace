#ifndef TRUCK_YARD_H
#define TRUCK_YARD_H

#include "Truck.h"
#include <vector>
#include <iostream> // Make sure iostream is included

class Truck_yard {
public:
    Truck_yard();  // default constructor
    explicit Truck_yard(int capacity);  // constructor with capacity
    ~Truck_yard();  // destructor

    int get_total_stock_count() const;
    int get_stock_count(int code) const;
    std::vector<Truck*> get_current_stock_list() const;
    bool addStock(Truck* c);

private:
    int capacity_;
    std::vector<Truck*> stock_;
};

#endif // TRUCK_YARD_H
