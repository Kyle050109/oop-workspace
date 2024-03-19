#include <iostream>
int *readNumbers(){
    int *numbers=new int[10];
    for(int i=0;i<10;i++){
    std::cin >> numbers[i];
    }
    return numbers;
}
int sumSubarray(int* numbers, int start, int end){
    int sum=0;
    for (int i=start;i<end;i++){
        sum+=numbers[i];
    }
    return sum;
}
int secondSmallestSum(int* numbers, int length){
    int smallest=INT_MAX;
    int secondSmallest=INT_MAX;
    for (int start=0;start<length;start++){
        for (int end=start+1;end<=length;end++){
            int array=sumSubarray(numbers,start,end);
            if (array<smallest){
                secondSmallest=smallest;
                smallest=array;
            }else if(array<secondSmallest&&array!=smallest){
                secondSmallest=array;
            }
        }
    }
        return secondSmallest;
    }
