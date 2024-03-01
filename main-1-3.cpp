#include <iostream>
extern int num_count(int array[], int n, int number);
int main(){
    int array[]={1,2,3,4,5,6,6,6};
    int n=sizeof(array)/sizeof(array[0]);
    int number=6;
    std::cout << "Number of elements " << number << " is " << num_count(array, n, number) << std::endl;
}
