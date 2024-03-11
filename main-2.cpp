#include <iostream>
using namespace std;
extern void changeValue(double* val);
int main(){
    double value=1;
    cout << "Original value: " << value << endl;
    changeValue(&value);
    cout << "New value: " << value << endl;
    return 0;
}
