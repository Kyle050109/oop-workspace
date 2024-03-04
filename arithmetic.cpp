#include <iostream>
int binaryToDecimal(const std::string &binaryString){
    int decimalNumber=0;
    for (char x:binaryString){
        decimalNumber=decimalNumber*2+(x-'0');
    }
    return decimalNumber;
}

int addBinary(int binary1, int binary2){
    return binary1+binary2;
}

int subtractBinary(int binary1, int binary2){
    return binary1-binary2;
}

int rightShiftBinary(int binary, int shift){
    return binary>>shift;
}
int leftShiftBinary(int binary, int shift){
    return binary<<shift;
}
int main(){
   
    int result1=addBinary(0b11,0b111011101011);
    std::cout << "The result of add binary is : " << binaryToDecimal(std::to_string(result1)) << std::endl;


    int result2=subtractBinary(0b111011101011,0b11);
    std::cout << "The result of subtract binary is : " << binaryToDecimal(std::to_string(result2)) << std::endl;


    int result3=rightShiftBinary(0b111011101011,2);
    std::cout << "The result of right shift binary is : " << binaryToDecimal(std::to_string(result3)) << std::endl;

    
    int result4=leftShiftBinary(0b111011101011,2);
    std::cout << "The result of right left binary is : " << binaryToDecimal(std::to_string(result4)) << std::endl;

    return 0;
}
