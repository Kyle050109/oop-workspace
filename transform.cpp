#include <iostream>
#include <string>
std::string converttoBinary(int decimalNumber){
    std::string binaryResult="";
    while (decimalNumber>0){
        int remain=decimalNumber%2;
        binaryResult=std::to_string(remain)+binaryResult;
        decimalNumber/=2;
    }
    return binaryResult;
}

