#ifndef INVOICE_H
#define INVOICE_H
#include<iostream>
#include<string>
class Invoice{
public:
    Invoice(std::string id); 
    void addServiceCost(int cost);
    int getDollarsOwed() const;
    std::string getInvoiceId() const;

private:
    std::string invoiceId;
    int dollarsOwed;
};
#endif