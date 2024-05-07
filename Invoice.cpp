#include "Invoice.h"
Invoice::Invoice(std::string id) : invoiceId(id), dollarsOwed(0){}

void Invoice::addServiceCost(int cost){
    dollarsOwed+=cost;
}
int Invoice::getDollarsOwed() const{
    return dollarsOwed;
}
std::string Invoice::getInvoiceId() const{
    return invoiceId;
}
