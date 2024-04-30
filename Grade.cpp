#include "Grade.h"
Grade::Grade():assignment("nullptr"), value(0){}
Grade::Grade(std::string assignment, int value) : assignment(assignment), value(value) {}
