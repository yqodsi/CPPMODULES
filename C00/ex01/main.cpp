#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phoneBook;
	std::string	cmd;

	while (true)
	{
		std::cout << "|///////////////////////////////////////////|" << std::endl;
		std::cout << "|//  OPTIONS:  [ADD]   [SEARCH]   [EXIT]  //|" << std::endl;
		std::cout << "|///////////////////////////////////////////|" << std::endl;
		std::cout  << std::endl << std::endl;
		std::cout << "$> ";
		if (std::getline(std::cin, cmd).eof())
		{
			std::cout << std::endl << "PROGRAM EXIT!" << std::endl;
			break ;
		}
		if (cmd.compare("EXIT") == 0)
		{
			std::cout << "PROGRAM EXITED!" << std::endl;
			break ;
		}
		else if (cmd.compare("ADD") == 0)
		{
			if (phoneBook.AddContact() == 0)
			{
				std::cout << std::endl << "PROGRAM EXIT!" << std::endl;
				break ;
			}
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			if (phoneBook.ShowContact() == 0)
			{
				std::cout << std::endl << "PROGRAM EXIT!" << std::endl;
				break ;
			}
		}
	}
	return (0);
}