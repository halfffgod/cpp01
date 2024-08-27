
#include "Zombie.hpp"

void Zombie::setname(std::string name)
{
    this->name = name;
}

Zombie::Zombie(std::string name)
{
    Zombie::setname(name);
}

Zombie::Zombie(void)
{
    std::cout << "Zombie created" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << ": Died" << std::endl;
}