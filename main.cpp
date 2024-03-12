#include <iostream>
#include "workshop.h"
using namespace std;
extern void changeValue(double* val);
extern void printArray(double* array, int size);
extern double arrayMax(double* array, int size);
extern double* dynamicArray(int size, double initialize);
int main(){
    double value=1;
    cout << "Original value: " << value << endl;
    changeValue(&value);
    cout << "New value: " << value << endl;
    
    double array1[]={1.0,2.0,3.0,4.0,5.0};
    int size1=sizeof(array1)/sizeof(array1[0]);
    printArray(array1,size1); 
   
    double array2[]={1.0,2.0,3.0,5.0,4.0};
    int size2=sizeof(array2)/sizeof(array2[0]);
    double max=arrayMax(array2,size2);
    cout << "The maximum value of the array is: " << max << endl;
 
    int size3=5;
    double initialize=1.0;
    double* array3=dynamicArray(size3,initialize);
    printArray(array3, size3);
    double max2=arrayMax(array3, size3);
    cout << "The maximum value in the array is: " << max2 << endl;
    delete[] array3;
   
}