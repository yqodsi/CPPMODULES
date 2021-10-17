#include "Karen.hpp"
#include <string>
#include <map>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "wrong input\n";
		return 1;
	}
	Karen	karen_test;

	karen_test.complain(av[1]);
	return 0;
	

}