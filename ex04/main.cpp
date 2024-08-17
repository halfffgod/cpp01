#include "replacer.hpp"

int main (int ac, char **av){
    if (ac != 4){
        std::cout << "Please enter correct number of arguments" 
                  << std::endl;
        return (0);
    }
    std::string modifier;
    std::string file_out = av[1];
    std::ifstream in(av[1]);
    if (!in){
        std::cout << "File opening error" << std::endl;
        return (0);
    }
    Replacer inout;
    if (!inout.set_strings(av[2], av[3])){
        return (0) ;
    }
    file_out +=  ".replace";
    std::ofstream out(file_out);
    std::string res;
    int count = 0;
    bool firstLine = true;
    while (std::getline(in, res)) {
        if (!firstLine) {
            modifier.append("\n");
        }
        modifier.append(res);
        firstLine = false;
        count++;
    }
    // std::cout << modifier << std::endl;
    for (int i = 0; i < count; i++){
        out << inout.switcher(modifier) << std::endl;
    }
    in.close(); out.close();
}
//test