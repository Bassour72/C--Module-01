#include "Zombie.hpp"

int main(void)
{
    Zombie *horde = zombieHorde(MAXZOMBIE, "toto");
    if (!horde) 
    {
        std::cerr << "Failed to allocate zombies!" << std::endl;
        return 1;
    }
    for (int i = 0; i < MAXZOMBIE; ++i)
        horde[i].announce();
    delete [] horde;
    return 0;
}
