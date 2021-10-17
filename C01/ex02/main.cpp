#include <iostream>
#include <string>

#define PUTENDL(x) std::cout << x << std::endl
#define PUT(x) std::cout << x

int main()
{
	std::string str;

	str = "HI THIS IS BRAIN";
	std::string &stringREF = str;
	std::string *stringPTR = &str;

	PUTENDL("STR MEM: " << &str);
	PUTENDL("PTR VAL: " << stringPTR);
	PUTENDL("REF MEM: " << &stringREF);
	
	return 0;
}

