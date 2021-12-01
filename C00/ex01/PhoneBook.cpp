#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : Index(0)
{
	Field[0] = "FIRST NAME";
	Field[1] = "LAST NAME";
	Field[2] = "NICKNAME";
	Field[3] = "PHONE NUMBER";
	Field[4] = "DARKEST SECRET";
}

int PhoneBook::AddContact(void)
{
	std::string str;
	std::cout << "TYPE YOUR DATA BELOW!" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::string str;

		std::cout << std::setw(15) << Field[i] << " : ";
		if (std::getline(std::cin, str).eof())
			return (0);
		contact[Index % 8].SetDataByIndex(i, str);
	}
	std::cout << "YOUR DATA WAS SUCCESSFULLY ADDED!" << std::endl;
	Index++;
	return (1);
}

void PhoneBook::showContactByIndex(const int index) const
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << std::setw(15) << Field[i] << " : " << contact[index].GetDataByIndex(i) << std::endl;
	}
}

int PhoneBook::ShowContact(void)
{
	if (Index == 0)
		std::cout << "NO DATA IN MEMORY! ADD FIRST!" << std::endl;
	else
	{
		std::cout << "+-------------------------------------------+" << std::endl;
		std::cout << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
		std::cout << "+-------------------------------------------+" << std::endl;
		for (int i = 0; i < Index && i < 8; i++)
		{
			std::cout << "|";
			std::cout << std::setw(10) << i + 1 << "|";
			for (int j = 0; j < 3; j++)
			{
				std::string str(contact[i].GetDataByIndex(j));
				if (str.length() > 10)
					str = str.substr(0, 9) + ".";
				std::cout << std::setw(10) << str << "|";
			}
			std::cout << std::endl;
		}
		std::cout << "+-------------------------------------------+" << std::endl;
		if (Index < 0)
			std::cout << "NO DATA IN MEMORY! ADD FIRST!" << std::endl;
		else
		{
			std::cout << "TYPE INDEX FOR DETAIL!" << std::endl;
			std::string str;
			int typingIndex;
			while (true)
			{

				std::cout << ">> ";
				if (std::getline(std::cin, str).eof())
					return (0);
				std::stringstream(str) >> typingIndex;
				std::cout << typingIndex << std::endl;
				if (typingIndex > 0 && typingIndex < Index + 1 && typingIndex <= 8)
				{
					showContactByIndex(typingIndex - 1);
					std::cout << std::endl;
					break;
				}
				else
				{
					std::cout << "INVALID INDEX! TYPE BETWEEN 1 ~ " << Index << std::endl;
				}
			}
		}
	}
	return (1);
}
