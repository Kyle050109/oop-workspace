int main() {
    Truck_yard yard(3);

    // Dynamically allocate Trucks
    Truck* t1 = new Truck(1, "Volvo");
    Truck* t2 = new Truck(2, "Sa");
    Truck* t3 = new Truck(3, "MAN");

    // Add trucks to yard
    yard.addStock(t1);
    yard.addStock(t2);
    yard.addStock(t3);

    // Get list of trucks in yard and print details
    Truck** stockList = yard.get_current_stock_list();
    for (int i = 0; i < yard.get_total_stock_count(); i++) {
        std::cout << "Truck ID: " << stockList[i]->get_brand_code()
                  << ", Brand: " << stockList[i]->get_brand_name() << std::endl;
    }

    // Clean up dynamically allocated trucks
    for (int i = 0; i < yard.get_total_stock_count(); i++) {
        delete stockList[i]; // This should be done inside Truck_yard's destructor if you're storing dynamic objects
    }

    return 0;
}
