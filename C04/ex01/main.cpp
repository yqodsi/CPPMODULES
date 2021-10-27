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

	Dog *dog1 = new Dog();
	// Dog dog2 = *dog1;

	dog1->setBrain("dog1_brain");
	Dog dog2(*dog1);
	// dog2.setBrain("dog2_brain");
	dog1->getBrain();
	dog2.getBrain();
	// const Animal* c = new Cat();

	return 0;
}