#include <iostream>
#include <string>
extern void print_binary_str(std::string decimal_number);
int main(){
    print_binary_str("12345");
    print_binary_str("123");
    print_binary_str("0");
    return 0;
}