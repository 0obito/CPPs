#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
    Zombie *zom;

    zom = new(Zombie);
    zom->zombie_name(name);
    return zom;
}
