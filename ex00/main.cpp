#include "Zombie.hpp"

int main ()
{
    Zombie o("white walker 1");
    o.announce();
    Zombie *i = newZombie("white walker 2");
    //Zombie *y = newZombie("oop");
    i->announce();
	//y->announce();
    randomChump("white walker 3");
    delete(i); 
	//delete(y);
}