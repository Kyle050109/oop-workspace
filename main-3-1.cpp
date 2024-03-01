#include <iostream>
extern bool is_fanarray(int array[], int n);
int main(){
    int array1[]={1,2,3,2,1};
    int n_1=sizeof(array1)/sizeof(array1[0]);
    std::cout << "Array1 is " << (is_fanarray(array1, n_1) ? "a fan array" : "not a fan array") << std::endl;

    int array2[]={7,2,1,2,1};
    int n_2=sizeof(array2)/sizeof(array2[0]);
    std::cout << "Array2 is " << (is_fanarray(array2, n_2) ? "a fan array" : "not a fan array") << std::endl;
    return 0;
}
