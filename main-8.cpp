#include <iostream>
using namespace std;
extern double* dynamicArray(int size, double initialize);
extern double arrayMax(double* array, int size);
extern void printArray(double* array, int size);
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
