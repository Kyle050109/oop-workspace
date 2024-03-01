#include <iostream>
int sum_two_arrays(int array[],int secondaryarray[],int n){
    if(n<1) return 0;
    int total=0;
    for(int i=0;i<n;i++) {
        total+=array[i]+secondaryarray[i];
    }
    return total;
}