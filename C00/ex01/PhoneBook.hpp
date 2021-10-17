#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>
#include <sstream>

#include "Contact.hpp"

class PhoneBook
{
private:
	int Index;
	int Old;
	Contact contact[8];
	std::string Field[5];

public:
	PhoneBook(void);
	int AddContact(void);
	int ShowContact(void);
	void showContactByIndex(const int index) const;
};

#endif
