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
bool equalsArray(int *numbers1,int *numbers2,int length){
    for(int i=0;i<length;i++){
    if(numbers1[i]!=numbers2[i]){
        return false;
     }
}
return true;
}