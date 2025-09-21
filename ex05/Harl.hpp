#pragma once
#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <string>
#include <iostream>
#include <fstream>
class Harl
{
private:
	/* data */
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	
	void	indexerror(void);

public:
	Harl(/* args */);
	void complain(std::string level);

	~Harl();
};
#endif // __HARL_HPP__
