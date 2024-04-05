#include "Truck_yard.h"
#include "Truck.h"
#include <iostream>

int main() {
    Truck_yard yard(3);

    
    Truck* t1 = new Truck(1, "Volvo");
    Truck* t2 = new Truck(2, "Sa");
    Truck* t3 = new Truck(3, "MAN");

   
    yard.addStock(t1);
    yard.addStock(t2);
    yard.addStock(t3);

    const Truck* const* stockList = yard.get_current_stock_list();
    for (int i = 0; i < yard.get_total_stock_count(); i++) {
        std::cout << "Truck ID: " << stockList[i]->get_brand_code()
                  << ", Brand: " << stockList[i]->get_brand_name() << std::endl;
    }

    

    return 0;
}

