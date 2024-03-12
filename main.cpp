#include <iostream>
using namespace std;
extern void changeValue(double* val);
int main(){
    double value=1;
    cout << "Original value: " << value << endl;
    changeValue(&value);
    cout << "New value: " << value << endl;
    return 0;
}
extern void printArray(double* array, int size);
int main(){
    double array[]={1.0,2.0,3.0,4.0,5.0};
    int size=sizeof(array)/sizeof(array[0]);
    printArray(array,size); 
    return 0;
}
extern double arrayMax(double* array, int size);
int main(){
    double array[]={1.0,2.0,3.0,5.0,4.0};
    int size=sizeof(array)/sizeof(array[0]);
    double max=arrayMax(array,size);
    cout << "The maximum value of the array is: " << max << endl;
    return 0;
}
int main(){
    int size=5;
    double initialize=1.0;
    double* array=dynamicArray(size,initialize);
    printArray(array, size);
    double max=arrayMax(array, size);
    cout << "The maximum value in the array is: " << max << endl;
    delete[] array;
    return 0;
}