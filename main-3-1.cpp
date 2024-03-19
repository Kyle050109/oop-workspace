#include <iostream>
extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);
int main(){
    std::cout << "The first array:" << '\n';
    int *array1=readNumbers();
    std::cout << "The second array:" << '\n';
    int *array2=readNumbers();
    if (equalsArray(array1,array2,10)){
        std::cout << "The arrays are equal." << std::endl;
    }else{
        std::cout << "The array are not equal." << std::endl;
    }
    delete[] array1;
    delete[] array2;
        return 0;
}
