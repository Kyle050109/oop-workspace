#include <iostream>
#include <string>
extern std::string converttoBinary(int decimalNumber);
int main(){
    int decimalNumber=10;
    std::string binaryNumber=converttoBinary(decimalNumber);
    std::cout << "The binary of " << decimalNumber << " is: " << binaryNumber << std::endl;
    return 0;
}