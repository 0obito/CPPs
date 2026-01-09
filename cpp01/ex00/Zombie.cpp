#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
}

Zombie::~Zombie() {
    std::cout << this->name << " Destroyed" << std::endl;
}

void Zombie::zombie_name(std::string zombie_name) {
    this->name = zombie_name;
};

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};
