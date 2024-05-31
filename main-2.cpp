#include <iostream>
#include "Trap.h"
#include "Character.h"
int main(){
    Trap trap(1,1);
    std::cout << "Trap initial active state: " << trap.isActive() << "\n";

    Cell cell(2,2,'A');
    trap.apply(cell);
    std::cout << "Cell type after trap applied: " << cell.getType() << "\n";
    std::cout << "Trap active state after applying: " << trap.isActive() << "\n";

    Character character(0,0);
    std::cout << "Character initial position: (" << std::get<0>(character.getPos()) << ", " << std::get<1>(character.getPos()) << ")\n";

    character.move(1,1);
    std::cout << "Character new position: (" << std::get<0>(character.getPos()) << ", " << std::get<1>(character.getPos()) << ")\n";

    return 0;
}