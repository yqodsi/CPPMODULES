#include "Contact.hpp"

void Contact::SetDataByIndex(const int index, const std::string str)
{
	Data[index] = str;
}

const std::string Contact::GetDataByIndex(const int index) const
{
	return (Data[index]);
}
