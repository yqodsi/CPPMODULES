#ifndef Contact_HPP
#define Contact_HPP

#include <iostream>

class Contact
{
private:
	std::string Data[5];

public:
	void SetDataByIndex(const int index, const std::string data);
	const std::string GetDataByIndex(const int index) const;
};

#endif