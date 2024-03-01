#include <iostream>
extern int min_element(int array[], int n);
int main(){
    int array[]={1,2,3,4,5,6}; 
    int n=sizeof(array)/sizeof(array[0]); 
    std::cout << " The minimum element is: " << min_element(array, n) << std::endl;
    return 0;
}