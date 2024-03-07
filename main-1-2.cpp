#include <iostream>
extern int is_identity(int array[10][10]);
int main(){
    int A[10][10]={0};
    if (is_identity(A)==1){
        std::cout << "The matrix is an identity matrix." << std::endl;
    }else{
        std::cout << "The matrix is not an identity matrix." << std::endl;
    }
    return 0;
}