#include "Zombie.hpp"

void randomChump( std::string name );

void randomChump(std::string name)
{
    Zombie zl(name);
    zl.announce();
}