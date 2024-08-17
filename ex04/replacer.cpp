#include "replacer.hpp"

std::string Replacer::switcher(std::string &str){
    std::string res;
    size_t index = 0, finder;
    while ((finder = str.find(_s1, index)) != std::string::npos){
        res.append(str, index , finder - index);
        res += _s2;
        index = finder + _s1.length();
    }
    res.append(str, index, str.length() - index);
    return (res);
}

int Replacer::set_strings(const std::string &s1, const std::string &s2){
    if (s1.empty() || s2.empty())
        return (0);
    this->_s1 = s1;
    this->_s2 = s2;
    return (1);
}