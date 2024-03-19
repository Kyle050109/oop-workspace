#include <iostream>
int *readNumbers(){
    int *numbers=new int[10];
    for(int i=0;i<10;i++){
    std::cin >> numbers[i];
    }
    return numbers;
}
int* reverseArray(int* numbers, int length){
    int* reversed=new int[length];
    for (int i=0;i<length;i++){
        reversed[i]=numbers[length-1-i];
    }
    return reversed;
}
