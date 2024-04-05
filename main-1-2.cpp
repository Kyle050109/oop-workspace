#include "Truck.h"
#include "Truck_yard.h"
#include <iostream>

int main() {
    Truck_yard yard(10);

    yard.addStock(new Truck(1, "Volvo"));
    yard.addStock(new Truck(2, "Scania"));
  
    std::cout << "Total stock count: " << yard.get_total_stock_count() << std::endl;

    for (auto* truck : yard.get_current_stock_list()) {
        std::cout << "Truck ID: " << truck->get_brand_code() 
                  << ", Brand: " << truck->get_brand_name() << std::endl;
    }

    for (auto* truck : yard.get_current_stock_list()) {
        delete truck;
    }

    return 0;
}


