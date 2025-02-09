#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	leaks(void)
{
	system("leaks animalworld");
}

int	main(void)
{
	// atexit(leaks);
	std::cout << "------------------------- Animal Started --------------------------" << std::endl;
	const Animal *randomAnimal = new Animal();
	const Animal *newDog = new Dog();
	const Animal *newCat = new Cat();
	std::cout << randomAnimal->getType() << " " << std::endl;
	std::cout << newDog->getType() << " " << std::endl;
	std::cout << newCat->getType() << " " << std::endl;
	randomAnimal->makeSound();
	newDog->makeSound();
	newCat->makeSound();
	std::cout << "----------------------- WrongAnimal Started -----------------------" << std::endl;
	const WrongAnimal *wrongRandomAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << wrongRandomAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongRandomAnimal->makeSound();
	wrongCat->makeSound();
	std::cout << "-------------------------------------------------------------------" << std::endl;
	delete randomAnimal;
	delete newDog;
	delete newCat;
	delete wrongRandomAnimal;
	delete wrongCat;
	return (0);
}