#include <iostream>
using namespace std;
double arrayMax(double* array, int size){
    double max=array[0];
    for(int i=1;i<size;i++){ 
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}
