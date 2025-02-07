#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	leaks(void)
{
	system("leaks animalworld");
}

int	main(void)
{
	// atexit(leaks);
	std::cout << "-------------------Normal Tests-------------------" << std::endl;
	int animalCount = 10;

	Animal *animalsArray[animalCount];

	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j;
	delete i;

	for (int i = 0; i < animalCount / 2; i++)
	{
		animalsArray[i] = new Dog();
	}
	for (int i = animalCount / 2; i < animalCount; i++)
	{
		animalsArray[i] = new Cat();
	}

	for (int i = 0; i < animalCount; i++)
	{
		delete animalsArray[i];
	}
	std::cout << "-----------------Cat Deep Copy Test-----------------" << std::endl;
	Cat newCat;
	Cat copiedCat = newCat;
	std::cout << "Original Cat Brain Address: " << newCat.getBrain() << std::endl;
	std::cout << "Copied Cat Brain Address: " << copiedCat.getBrain() << std::endl;
	std::cout << "-----------------Dog Deep Copy Test-----------------" << std::endl;
	Dog newDog;
	Dog copiedDog = newDog;
	std::cout << "Original Dog Brain Address: " << newDog.getBrain() << std::endl;
	std::cout << "Copied Dog Brain Address: " << copiedDog.getBrain() << std::endl;
	std::cout << "---------------------- THE END ---------------------" << std::endl;
	return (0);
}