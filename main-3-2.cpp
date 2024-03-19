#include <iostream>
extern int *readNumbers();
extern int *reverseArray(int* numbers, int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);
int main(){
    int* array=readNumbers();
    int* reversed=reverseArray(array, 10);
     bool equal=equalsArray(array, reversed, 10);
     std::cout << "The arrays are " << (equal ? "equal" : "not equal") << std::endl;
    delete[] array;
    delete[] reversed; 
    return 0;
}
