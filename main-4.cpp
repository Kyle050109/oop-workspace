#include <iostream>
using namespace std;
extern double arrayMax(double* array, int size);
int main(){
    double array[]={1.0,2.0,3.0,5.0,4.0};
    int size=sizeof(array)/sizeof(array[0]);
    double max=arrayMax(array,size);
    cout << "The maximum value of the array is: " << max << endl;
    return 0;
}