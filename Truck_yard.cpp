#include "Truck_yard.h"
#include <iostream>

Truck_yard::Truck_yard() : capacity_(0), current_stock_(0), stock_(nullptr) {}

Truck_yard::Truck_yard(int capacity) 
    : capacity_(capacity), current_stock_(0), stock_(new Truck*[capacity]()) {}

Truck_yard::~Truck_yard() {
    for (int i = 0; i < current_stock_; ++i) {
        delete stock_[i];
    }
    delete[] stock_;
}

int Truck_yard::get_total_stock_count(){
    return current_stock_;
}

int Truck_yard::get_stock_count(int code){
    int count = 0;
    for (int i = 0; i < current_stock_;i++) {
        if (stock_[i]->get_brand_code() == code){
            ++count;
        }
    }
    return count;
}

Truck** Truck_yard::get_current_stock_list(){
    return stock_;
}

bool Truck_yard::addStock(Truck* c) {
    if (current_stock_ < capacity_) {
        stock_[current_stock_++] = c;
        return true;
    } else {
        std::cerr << "The lot is full." << std::endl;
        return false;
    }
}
