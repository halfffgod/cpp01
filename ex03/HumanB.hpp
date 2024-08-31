#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string namee;
        Weapon *tool;
    public:
        HumanB(const std::string&);
        void attack();
        void setWeapon(Weapon &);
        ~HumanB(void);
};

#endif