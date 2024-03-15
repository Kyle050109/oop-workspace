#include <iostream>
double arrayMin(double* array, int size);
int main(){
    double array[]={1.1,-2.3,4.5,3.1,-8.1,3.3};
    int size=sizeof(array)/sizeof(array[0]);
    double minValue=arrayMin(array,size);
    std::cout << "The minimum value is: " << minValue << std::endl; 
    return 0;
}