#include "Truck.h"
#include "Truck_yard.h"
#include <iostream>

int main(){
   
    Truck_yard yard(5);
    Truck* t1 = new Truck(1, "Volvo");
    Truck* t2 = new Truck(2, "Scania");
    Truck* t3 = new Truck(3, "Mercedes");

    yard.addStock(t1);
    yard.addStock(t2);
    yard.addStock(t3);

    std::cout << "Total stock count: " << yard.get_total_stock_count() << std::endl;

    
    std::cout << "Stock count for brand code 1: " << yard.get_stock_count(1) << std::endl;
    std::cout << "Stock count for brand code 2: " << yard.get_stock_count(2) << std::endl;
    std::cout << "Stock count for brand code 3: " << yard.get_stock_count(3) << std::endl;


    Truck** list=yard.get_current_stock_list();
    for(int i=0;i<yard.get_total_stock_count();i++){
        if (list[i]!=nullptr){
            std::cout << "Truck ID: " << list[i]->get_brand_code() << ", Brand: " << list[i]->get_brand_name() << std::endl;
        }
    }

    for(int i=0;i<yard.get_total_stock_count();i++){
        delete list[i];
    }
return 0;
}

