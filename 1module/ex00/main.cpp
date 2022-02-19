#include "Zombie.hpp"
Zombie* newZombie( std::string name );
void randomChump( std::string name );
int main(){

    Zombie *zom = new Zombie();
    zom->announcement();
    delete zom;
    randomChump("misha");
    Zombie *zombie = newZombie("testoviy obrazec");
    zombie->announcement();
    std::cout << "testoviy otstup" << std::endl;
    delete zombie;
    std::cout << "konec programi\n";
}