#include <iostream>
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);
int main(){
    int integers[]={1,2,3,2,1};
    int length=sizeof(integers)/sizeof(integers[0]);
    int result=sum_if_palindrome(integers, length);
    if (result==-1){
        std::cout << "Array length is 0 or negative." << std::endl;
    }else if(result==-2){
        std::cout << "Array is not a palindrome." << std::endl;
    }else{
        std::cout << "Sum of palindrome array elements: " << result << std::endl;
    }
    return 0;
}
