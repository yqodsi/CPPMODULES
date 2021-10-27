#include "Ice.hpp"

int main()
{	
	Ice ice;
	std::cout << ice.getType() << std::endl;
	Ice *test; 
	test = ice.clone();
	std::cout << test->getType() << std::endl;
	delete test;
	return 0;
}