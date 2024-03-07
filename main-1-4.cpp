#include <iostream>
extern void print_scaled(int array[3][3], int scale);
int main(){
    int scale=3;
    int A[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
    print_scaled(A, scale);
    return 0;
}