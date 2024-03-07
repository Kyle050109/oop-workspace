#include <iostream>
extern int sum_diagonal(int array[4][4]);
int main(){
    int A[4][4]={{1,3,3,4},{1,3,3,4},{1,2,4,4},{1,2,3,5}};
    std::cout << "The sum of the array is: " << sum_diagonal(A) << std::endl;
    return 0;
}