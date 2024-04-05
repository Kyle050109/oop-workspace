#include "Truck_yard.h"

Truck_yard::Truck_yard() : capacity_(0) {}

Truck_yard::Truck_yard(int capacity) : capacity_(capacity){}

Truck_yard::~Truck_yard(){
    for (auto* truck : stock_){
        delete truck;
    }
}

int Truck_yard::get_total_stock_count() const{
    return stock_.size();
}

int Truck_yard::get_stock_count(int code) const{
    int count=0;
    for (auto* truck : stock_){
        if (truck->get_brand_code() == code){
            ++count;
        }
    }
    return count;
}

std::vector<Truck*> Truck_yard::get_current_stock_list() const {
    return stock_;
}

bool Truck_yard::addStock(Truck* c) {
    if (get_total_stock_count()<capacity_){
        stock_.push_back(c);
        return true;
    }else{
        std::cout << "The lot is full." << std::endl;
        return false;
    }
}
