#include "Zombie.hpp"

int main()
{

	std::cout << "=========================" << std::endl;
	Zombie *arr = zombieHorde(5, "Zombie");
	for (int i = 0; i < 5; i++)
		arr[i].announce();
	delete[] arr;
	return 0;
}