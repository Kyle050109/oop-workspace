#include <iostream>
extern bool is_descending(int array[], int n);
int main(){
    int array[]={6,5,4,3,2,1};
    int n=sizeof(array)/sizeof(array[0]);
    if (is_descending(array,n)){
        std::cout << "The array is descending order." << std::endl;
        }else{
             std::cout << "The array is not descending order." << std::endl;
    }
    return 0;
    }