#include <iostream>
extern void modifyArray(double* array, int size, double value);
int main(){
    double array[]={1.0,2.0,3.0,4.0,5.0};
    int size=sizeof(array)/sizeof(array[0]); 
    double valueToAdd=1.5;
    modifyArray(array,size,valueToAdd);
    std::cout << "Modified array: ";
    for (int i=0;i<size;i++){
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}