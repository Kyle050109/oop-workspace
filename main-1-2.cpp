#include "Truck.h"
#include "Truck_yard.h"
#include <iostream>

int main() {
    
    Truck_yard yard(10);
    Truck* t1=new Truck(1, "Volvo");
    Truck* t2=new Truck(2, "Xa");
    Truck* t3=new Truck(3, "Yc");

    bool added1 = yard.addStock(t1);
    bool added2 = yard.addStock(t2);
    bool added3 = yard.addStock(t3);
    std::cout << "Truck 1 added: " << (added1 ? "Yes" : "No") << std::endl;
    std::cout << "Truck 2 added: " << (added2 ? "Yes" : "No") << std::endl;
    std::cout << "Truck 3 added: " << (added3 ? "Yes" : "No") << std::endl;

  
    std::cout << "Total stock count: " << yard.get_total_stock_count() << std::endl;

    
    Truck* t4 = new Truck(4, "MAN");
    if (!yard.addStock(t4)) {
        std::cout << "Truck yard is full, could not add Truck 4." << std::endl;
        delete t4;
    }

    
    Truck** stockList=yard.get_current_stock_list();
    for (int i=0; i<yard.get_total_stock_count();i++){
        if (stockList[i] != nullptr){ 
            std::cout << "Truck ID: " << stockList[i]->get_brand_code() 
                      << ", Brand: " << stockList[i]->get_brand_name() << std::endl;
        }
    }

   
    for (int i = 0; i < yard.get_total_stock_count(); i++) {
        if (stockList[i] != nullptr) {
            delete stockList[i]; // Delete the truck
        }
    }

    return 0;
}
