#include "Zombie.hpp"

int main()
{
    randomChump("A");
    Zombie *sp = newZombie("B");
    sp->announce();
    delete(sp);
    return (0);
}
