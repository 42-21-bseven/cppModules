#include "Zombie.hpp"
Zombie* newZombie( std::string name );
void randomChump( std::string name );
int main(){
    randomChump("misha");
    Zombie *zombie = newZombie("testoviy obrazec");
    zombie->announce();
    std::cout << "testoviy otstup" << std::endl;
    delete zombie;
    std::cout << "konec programi\n";
}