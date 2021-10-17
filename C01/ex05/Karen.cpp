#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void	Karen::debug( void )
{
	std::cout << "DEBUG:\t\t"
	"I love to get extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup "
	"burger. I just love it!\n";
}

void	Karen::info( void )
{
	std::cout << "INFO:\t\t"
	"I cannot believe adding extra bacon "
	"cost more money. You don’t put enough! If you did "
	"I would not have to ask for it!\n";
}

void	Karen::warning( void )
{
	std::cout << "WARNING:\t"
	"I think I deserve to have some extra "
	"bacon for free. I’ve been coming here for years and "
	"you just started working here last month.\n";
}

void	Karen::error( void )
{
	std::cout << "ERROR:\t\t"
	"This is unacceptable, I want to speak "
	"to the manager now.\n";
}

void	Karen::lnf( void )
{
	std::cout << "level not found\n";
}

void	Karen::complain( std::string level )
{
	void	(Karen::*pointers_to_func_members[5]) ()
	= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::lnf};
	if (level == "DEBUG")
		(this->*pointers_to_func_members[0])();
	else if (level == "INFO")
		(this->*pointers_to_func_members[1])();
	else if (level == "WARNING")
		(this->*pointers_to_func_members[2])();
	else if (level == "ERROR")
		(this->*pointers_to_func_members[3])();
	else  
		(this->*pointers_to_func_members[4])();

}