#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <ios>
class Replacer
{
    private:
        std::string s2;
        std::string s1;
    public:
        std::string switcher(std::string &str);
        int     set_strings(const std::string &s1, const std::string &s2);
};

#endif