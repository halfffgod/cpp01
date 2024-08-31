#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
{
    this->tool = NULL;
    this->namee = name;
}

HumanB::~HumanB(void)
{
    std::cout << namee <<" has left the game" << std::endl;
}

void HumanB::setWeapon(Weapon &arm)
{
    this->tool = &arm;
}

void HumanB::attack()
{
    if (tool)
        std::cout << namee << " attacks with their " 
            << tool->getType() << std::endl;
            
}