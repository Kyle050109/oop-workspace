#include <iostream>
double array_mean(int array[], int n){
    if(n<1) return 0.0;
    double mean=0.0;
    double total=0.0;
    for(int i=0;i<n;i++){
  total+=array[i];
  }
  double mean=total/n;
  return mean;
    }
