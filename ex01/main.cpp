#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	leaks(void)
{
	system("leaks animalworld");
}

int	main(void)
{
	atexit(leaks);
	int animalCount = 10;

	Animal *animalsArray[animalCount];

	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j;
	delete i;

	for (int i = 0; i < animalCount / 2; i++) {
		animalsArray[i] = new Dog();
	}
	for (int i = animalCount / 2; i < animalCount; i++) {
		animalsArray[i] = new Cat();
	}

	for (int i = 0; i < animalCount; i++) {
		delete animalsArray[i];
	}
	return (0);
}