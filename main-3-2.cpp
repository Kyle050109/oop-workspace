#include <iostream>
extern int median_array(int array[],int n);
int main(){
    int array[]={3,5,2,1,4};
    int n=sizeof(array)/sizeof(array[0]);
    int median=median_array(array,n);
    if (median!=0){
        std::cout << "The median of the array is: " << median << std::endl;
    }else{
        std::cout << "The array has an even number of elements or is not true" << std::endl;
    }
    return 0;
}

