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
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
    std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "----------------------- WrongAnimal Started -----------------------" << std::endl;
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongCat *wrongCat = new WrongCat();
	std::cout << wrongMeta->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongMeta->makeSound();
	wrongCat->makeSound();
	std::cout << "-------------------------------------------------------------------" << std::endl;
	delete meta;
	delete j;
	delete i;
	return (0);
}