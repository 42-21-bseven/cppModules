#include "Weapon.hpp"

void Weapon::setType(std::string type){
    this->type = type;
}

Weapon::Weapon(std::string type) : type(type){
    // this->type = type;
}

std::string Weapon::getType(){
    return type;
}