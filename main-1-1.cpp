#include <iostream>
extern int array_sum(int array[], int n);
int main() {
    int array[]={1,2,3,4,5};
    int n=sizeof(array)/sizeof(array[0]);
    std::cout << "The sum of the array elements is: " << array_sum(array, n) << std::endl;
   return 0;
}
