#include <iostream>
extern bool is_ascending(int array[], int n);
int main(){
    int array[]={1,2,3,4,5}; 
    int n=sizeof(array)/sizeof(array[0]);
    if (is_ascending(array,n)){
        std::cout << "The array is ascending order." << std::endl;
    }else{
        std::cout << "The array is not ascending order." << std::endl;
    }
    return 0;
}