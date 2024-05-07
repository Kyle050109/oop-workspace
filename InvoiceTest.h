#ifndef INVOICETEST_H
#define INVOICETEST_H
#include "Invoice.h"
#include <iostream>

class InvoiceTest{
public:
    void runTests(){
        testAddServiceCost();
    }

private:
    void testAddServiceCost(){
        Invoice invoice("ABCD");
        invoice.addServiceCost(10);
        if (invoice.getDollarsOwed()!=10){
            std::cout << "Test 1 failed!" << std::endl;
        }
    }
};
#endif