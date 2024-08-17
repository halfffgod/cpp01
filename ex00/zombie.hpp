#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
    private :
        std::string name;
    public :
    void announce(void);
    Zombie();
    void setname(std::string);
    ~Zombie(void);
};
Zombie* zombieHorde( int N, std::string name);

#endif