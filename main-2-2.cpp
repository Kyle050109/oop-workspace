#include <iostream>
extern int max_element(int array[], int n);
int main() {
    int array[]={1,2,3,4,5,6,7};
    int n=sizeof(array) / sizeof(array[0]);
    std::cout << "The maximum element is: " << max_element(array, n) << std::endl; 
    return 0;
}
