#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	// Animal animal;
	// animal.makeSound();
	Dog dog1;
	Dog dog2;
	dog1.setBrain("dog1 : good idea");
	dog2.setBrain("dog2 : good idea");
	dog2 = dog1;
	dog1.getBrain();
	dog2.getBrain();

	return 0;
}