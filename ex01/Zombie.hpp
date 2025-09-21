#ifndef __ZOMBIE__H_
#define __ZOMBIE__H_

#include <iostream>
#include <string>
#define MAXZOMBIE  5
class Zombie
{
private:
    std::string _name;
public:
	Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce(void);
    void setName(std::string name);
    std::string getName(void);
};

Zombie* zombieHorde( int N, std::string name);

#endif
