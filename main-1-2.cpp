#include <iostream>
#include "Truck_yard.h"
#include "Truck.h"

int main(){
    Truck_yard yard(5);

    Truck* t1=new Truck(123, "Ford");
    Truck* t2=new Truck(456, "Toyota");
    Truck* t3=new Truck(789, "Honda");
    yard.addStock(t1);
    yard.addStock(t2);
    yard.addStock(t3);

    std::cout << "Total stock count: " << yard.get_total_stock_count() << std::endl;
    std::cout << "Stock count for Ford: " << yard.get_stock_count(123) << std::endl;

    Truck** list=yard.get_current_stock_list();
    for(int i=0;i<yard.get_total_stock_count();i++){
        if(list[i] != nullptr){
            std::cout << "Truck ID: " << list[i]->get_brand_code() << ", Brand: " << list[i]->get_brand_name() << std::endl;
        }
    }

    
    for(int i=0;i<yard.get_total_stock_count();i++){
        delete list[i];
    }
    return 0;
}

