#include "Karen.hpp"
#include <map>

Karen::Karen() {}

Karen::~Karen() {}

void Karen::debug(void)
{
	std::cout << "[DEBUG]\n"
				 "I love to get extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
				 "I just love it!\n";
}

void Karen::info(void)
{
	std::cout << "[INFO]\n"
				 "I cannot believe adding extra bacon "
				 "cost more money.\n"
				 "You don’t put enough!\n"
				 "If you did I would not have to ask for it!\n";
}

void Karen::warning(void)
{
	std::cout << "[WARNING]\n"
				 "I think I deserve to have some extra "
				 "bacon for free.\n"
				 "I’ve been coming here for years and "
				 "you just started working here last month.\n";
}

void Karen::error(void)
{
	std::cout << "[ERROR]\n"
				 "This is unacceptable, I want to speak "
				 "to the manager now.\n";
}

void Karen::complain(std::string level)
{
	void (Karen::*pointers_to_func_members[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	static std::pair<std::string, int> p[] = {
		std::pair<std::string, int>("DEBUG", 1),
		std::pair<std::string, int>("INFO", 2),
		std::pair<std::string, int>("WARNING", 3),
		std::pair<std::string, int>("ERROR", 4),
	};

	
	static std::map<std::string, int> m(p, p + 4);
	int i = m.find(level)->second;
	switch (i)
	{
	case 1:
		(this->*pointers_to_func_members[0])();
		std::cout << "\n";
	case 2:
		(this->*pointers_to_func_members[1])();
		std::cout << "\n";
	case 3:
		(this->*pointers_to_func_members[2])();
		std::cout << "\n";
	case 4:
		(this->*pointers_to_func_members[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}