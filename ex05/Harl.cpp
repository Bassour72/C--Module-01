#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

void	Harl::debug(void)
{
	std :: cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
}
void	Harl::info(void)
{
	std :: cout<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std :: cout<< "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}
void	Harl::error(void)
{
	std :: cout<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::indexerror(void)
{
	std :: cout<< "index error" << std::endl;
}
void Harl::complain(std::string level)
{
	typedef void (Harl::*PointerToFunction)(void);
	int index =  -1;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR", };
	PointerToFunction funcs[] = { &Harl::indexerror, &Harl::debug, &Harl::info,&Harl::warning,&Harl::error};
	index = (level == "DEBUG") * 1 + (level == "INFO") * 2 + (level == "WARNING") * 3 + (level == "ERROR") * 4 ;
	(this->*funcs[index])();

}

Harl::~Harl()
{
}