#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string namee;
        Weapon &tool;
    public:
    void attack();
    HumanA(const std::string &name, Weapon&);
    ~HumanA(void);
};

#endif