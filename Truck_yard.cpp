#include "Truck_yard.h"
#include <iostream>
Truck_yard::Truck_yard() : capacity(0), current_stock(0), stock(nullptr){}
Truck_yard::Truck_yard(int cap) : capacity(cap), current_stock(0){
    stock = new Truck*[capacity];
    for(int i=0;i<capacity;i++){
        stock[i]=nullptr;
    }
}
Truck_yard::~Truck_yard(){
    for(int i=0;i<capacity;i++){
        delete stock[i]; 
    }
    delete[] stock;
}

int Truck_yard::get_total_stock_count(){
    return current_stock;
}
int Truck_yard::get_stock_count(int code){
    int count=0;
    for(int i=0;i<current_stock;i++){
        if(stock[i] != nullptr && stock[i]->get_brand_code() == code){
            count++;
        }
    }
    return count;
}
Truck** Truck_yard::get_current_stock_list() {
    return stock;
}

bool Truck_yard::addStock(Truck* c){
    if(current_stock < capacity){
        stock[current_stock++]=c; 
        return true;
    }else{
        std::cout << "The lot is full." << std::endl;
        return false;
    }
}

