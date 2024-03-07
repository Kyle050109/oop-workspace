#include <iostream>
extern void print_summed(int array1[3][3], int array2[3][3]);
int main(){
    int A[3][3]={{0,1,2},{3,4,5},{6,7,8}};
    int B[3][3]={{0,1,1},{2,2,3},{4,5,5}};
    print_summed(A,B);
    return 0;
}