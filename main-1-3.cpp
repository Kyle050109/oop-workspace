#include <iostream>
extern double* duplicateArray(double* array, int size);
int main(){
    double array[] = {1.0,2.0,3.0};
    int size = sizeof(array)/sizeof(array[0]);
    double* arrCopy = duplicateArray(array,size);
    std::cout << "Original array: ";
    for (int i=0;i<size;i++){
        std::cout << array[i] << " ";
    }
    std::cout << "\nDuplicated array: ";
    for (int i=0;i<size;i++){
        std::cout << arrCopy[i] << " ";
    }
    std::cout << std::endl;
    delete[] arrCopy;
    return 0;
}