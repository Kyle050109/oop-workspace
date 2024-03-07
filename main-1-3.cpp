#include <iostream>
extern void count_digits(int array[4][4]);
int main(){
    int A[4][4]={{1,1,1,1},{2,3,3,4},{4,5,5,6},{7,9,9,0}};
    count_digits(A);
    return 0;
}
