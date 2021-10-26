#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	// int i = 0;
	// int size = 10;
	// Animal **animal = new Animal *[size];
	// while (i < size / 2)
	// 	animal[i++] = new Dog();
	// while(i < size)
	// {
	// 	animal[i++] = new Cat();
	// }
	// i = 0;
	// while(i < size)
	// {
	// 	delete animal[i++];
	// }

	const Animal* j = new Dog();
	const Animal* c = new Cat();
	delete j;//should not create a leak
	delete c;
	return 0;
}