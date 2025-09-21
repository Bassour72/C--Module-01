#include "Zombie.hpp"

int main(void)
{
    Zombie z("FOO");
    z.announce();
    Zombie* zz = newZombie("TOO");
    if (zz) 
    {
        zz->announce();
        delete zz;
    } 
    else 
    {
        std::cerr << "Failed to create Zombie TOO" << std::endl;
    }
    Zombie* z1 = newZombie("Bob");
    if (z1) 
    {
        z1->announce();
        delete z1;
    } 
    else 
    {
        std::cerr << "Failed to create Zombie Bob" << std::endl;
    }
    return 0;
}