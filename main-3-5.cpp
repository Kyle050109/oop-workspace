#include <iostream>
extern double sum_even(double array[], int n);
int main(){
    double array[]={1.1,2.2,3.3,4.4,5.5};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout << "Sum of elements at even positions: " << sum_even(array, n) << std::endl;
    return 0;
}
