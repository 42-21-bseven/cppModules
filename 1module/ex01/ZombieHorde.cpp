#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombieArray = new Zombie[N];
    int i = 0;
    while (i < N){
        zombieArray[i].setName(name);
        i++;
    }
    return zombieArray;
}