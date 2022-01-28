#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        void announce();
        ~Zombie();
        Zombie();
        void setName(std::string name);
        Zombie(std::string name);
};

#endif