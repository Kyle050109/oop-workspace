#include <iostream>
using namespace std;
extern void printArray(double* array, int size);
int main(){
    double array[]={1.0,2.0,3.0,4.0,5.0};
    int size=sizeof(array)/sizeof(array[0]);
    printArray(array,size); 
    return 0;
}
