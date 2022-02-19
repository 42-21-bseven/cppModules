#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        void announcement();
        ~Zombie();
        Zombie(std::string name);
        Zombie();
};

#endif