#include <iostream>
extern int sum_two_arrays(int array[],int secondaryarray[],int n);
int main(){
    int array[]={1,2,3,4,5};
    int secondaryarray[]={6,7,8,9,10};
    int n=sizeof(array) / sizeof(array[0]);
    std::cout << "The sum of elements is: " << sum_two_arrays(array, secondaryarray, n) << std::endl;
   return 0;
}