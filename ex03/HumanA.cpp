#include "HumanA.hpp"

HumanA::HumanA(const std::string &name , Weapon &tmp): tool(tmp){
    _name = name;
}

void HumanA::attack(){
    std::cout << _name << " attacks with their " 
    << tool.getType() << std::endl;
}

HumanA::~HumanA(void){
    std::cout << _name << " done playing" << std::endl;
}