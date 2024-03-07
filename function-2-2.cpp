#include <iostream>
int binary_to_int(int binary_digits[], int number_of_digits){
    int decimal_value=0;
    int base=1;
    for (int i=number_of_digits-1;i>=0;i--){
        decimal_value+=binary_digits[i]*base;
        base*=2;
    }
    return decimal_value;
}
