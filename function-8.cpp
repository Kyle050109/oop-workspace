#include <iostream>
using namespace std;
double* dynamicArray(int size, double initialize){
    double* array=new double[size];
    for (int i=0;i<size;i++){
        array[i]=initialize;
    }
    return array;
}
double arrayMax(double* array, int size){
    double max=array[0];
    for (int i=1;i<size;i++){
        if (array[i]>max){
            max=array[i];
        }
    }
    return max;
}
void printArray(double* array, int size){
    for (int i=0;i<size;i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

