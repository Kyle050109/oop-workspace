#include <iostream>
int *readNumbers(){
    int *numbers=new int[10];
    for(int i=0;i<10;i++){
    std::cin >> numbers[i];
    }
    return numbers;
}
void printNumbers(int *numbers,int length){
     for (int i=0;i<length;i++){
        std::cout << i << " " << numbers[i] << "\n" << std::endl;
    }
}
void hexDigits(int *numbers,int length){
    for(int i=0;i<length;i++){
        if(numbers[i]>=0 && numbers[i]<=9){
            std::cout << i << ' ' << numbers[i] << ' ' << numbers[i] << "\n" << std::endl;
        }else{
    switch(numbers[i]){
        case 10:
        std::cout << i << ' ' << numbers[i]  << ' ' <<  "A" << "\n" << std::endl;
        break;
        case 11:
        std::cout << i << ' ' << numbers[i]  << ' ' <<  "B" << "\n" << std::endl;
        break;
        case 12:
        std::cout << i << ' ' << numbers[i]  << ' ' <<  "C" << "\n" << std::endl;
        break;
        case 13:
        std::cout << i << ' ' << numbers[i]  << ' ' <<  "D" << "\n" << std::endl;
        break;
        case 14:
        std::cout << i << ' ' << numbers[i]  << ' ' <<  "E" << "\n" << std::endl;
        break;
        case 15:
        std::cout << i << ' ' << numbers[i]  << ' ' <<  "F" << "\n" << std::endl;
        break;
        }
}
}
}