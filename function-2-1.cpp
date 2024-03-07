#include <iostream>
#include <string>
void print_binary_str(std::string decimal_number){
    int num=std::stoi(decimal_number);
     std::string binary_str="";
    if (num==0){
        binary_str="0";
    }
    while (num>0){
        binary_str=std::to_string(num%2)+binary_str;
        num/=2;
    }
    std::cout << binary_str << std::endl;
}