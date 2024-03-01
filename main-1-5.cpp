#include <iostream>
extern int count_evens(int number);
int main(){
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "The count of evens between 1 and " << number << " is " << count_evens(number) << std::endl;
    return 0;
}