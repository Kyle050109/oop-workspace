#include <iostream>
int binary_to_int(int binary_digits[], int number_of_digits);
int main(){
    int binary_array[3]={1,0,1};
     std::cout << "Decimal value of binary is: " << binary_to_int(binary_array, 3) << std::endl;
    return 0;
}
