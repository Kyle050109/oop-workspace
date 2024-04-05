#include "Truck_yard.h"
#include "Truck.h"
#include <iostream>

int main() {
    Truck_yard yard(10);

   
    Truck* t1 = new Truck(1, "Volvo");
    Truck* t2 = new Truck(2, "Sa");
    Truck* t3 = new Truck(3, "kx");

  
    yard.addStock(t1);
    yard.addStock(t2);
    yard.addStock(t3);

  
    std::cout << "Total stock count: " << yard.get_total_stock_count() << std::endl;

   
    std::vector<Truck*> stockList = yard.get_current_stock_list();
    for (const auto* truck : stockList) {
        if (truck != nullptr) {
            std::cout << "Truck ID: " << truck->get_brand_code() << ", Brand: " << truck->get_brand_name() << std::endl;
        }
    }
    return 0;
}
