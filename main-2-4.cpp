#include <iostream>
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);
int array_min(int integers[], int length);
int main(){
    int array1[]={1,2,3,4,5};
    int array2[]={-1,-2,-3,-4,-5};
    int array3[]={};
    std::cout << "Sum of min and max in array1: " << sum_min_max(array1, 5) << std::endl;
    std::cout << "Sum of min and max in array2: " << sum_min_max(array2, 5) << std::endl;
    std::cout << "Sum of min and max in array3: " << sum_min_max(array3, 0) << std::endl;
    return 0;
}