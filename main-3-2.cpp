#include <iostream>
extern int *readNumbers();
extern int* reverseArray(int* numbers, int length);
int main(){
    int* array=readNumbers();
    int* reversed=reverseArray(array, 10);
    for(int i=0;i<10;i++){
        std::cout << reversed[i] << " ";
    }
    std::cout << std::endl;
    delete[] reversed; 
    return 0;
}
