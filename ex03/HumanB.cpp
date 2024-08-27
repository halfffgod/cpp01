#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
{
    this->tool = NULL;
    this->_name = name;
}

HumanB::~HumanB(void)
{
    std::cout << _name <<" has left the game" << std::endl;
}

void HumanB::setWeapon(Weapon &arm)
{
    this->tool = &arm;
}

void HumanB::attack()
{
    if (tool)
        std::cout << _name << " attacks with their " 
            << tool->getType() << std::endl;
            
}