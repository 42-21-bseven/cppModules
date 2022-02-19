#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name );
int main(){

    Zombie *zombieArray = zombieHorde(10, "Kolya");
    int i = 0;
    while (i < 10){
        zombieArray[i].announcement();
        i++;
    }
    delete[] zombieArray;
}