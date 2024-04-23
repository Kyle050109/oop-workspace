#include"TV.h"
int main(){
    TV myTV(100, 200);
    std::cout<< "Power consumption: " << myTV.getPowerConsumption() << "W" << std::endl;
    return 0;
}