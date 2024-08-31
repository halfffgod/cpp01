#include "HumanA.hpp"

HumanA::HumanA(const std::string &name , Weapon &tmp): tool(tmp)
{
    namee = name;
}

void HumanA::attack()
{
    std::cout << namee << " attacks with their " 
    << tool.getType() << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << namee << " done playing" << std::endl;
}