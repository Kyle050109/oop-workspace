    #include <iostream>
    #include "workshop.h"
    using namespace std;
    void changeValue(double* val){
        *val=42;
    }
    void printArray(double* array, int size){
        for(int i=0;i<size;i++){
            cout << array[i] << " ";
        }
        cout << endl;
    }
    double arrayMax(double* array, int size){
        double max=array[0];
        for(int i=1;i<size;i++){ 
            if(array[i]>max){
                max=array[i];
            }
        }
        return max;
    }
    double* dynamicArray(int size, double initialize){
        double* array=new double[size];
        for (int i=0;i<size;i++){
            array[i]=initialize;
        }
        return array;
    }