#ifndef INVOICE_H
#define INVOICE_H
#include<iostream>
#include<string>
class Invoice {
public:
    Invoice(std::string id) : invoiceId(id), dollarsOwed(0){}

    void addServiceCost(int cost){
        dollarsOwed+=cost;
    }

    int getDollarsOwed() const{
        return dollarsOwed;
    }

    std::string getInvoiceId() const{
        return invoiceId;
    }

private:
    std::string invoiceId;
    int dollarsOwed;
};
#endif