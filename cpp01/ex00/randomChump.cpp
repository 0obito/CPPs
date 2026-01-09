#include "Zombie.hpp"

void    randomChump(std::string name) {
    Zombie  zom;

    zom.zombie_name(name);
    zom.announce();
    return ;
}
