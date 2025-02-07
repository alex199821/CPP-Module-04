#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	brain = new Brain(*copy.brain);
	std::cout << "Cat with type of " << type << " was copied." << std::endl;
}

Cat::~Cat()
{
	delete	brain;

	std::cout << "Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		Animal::operator=(copy);
		*brain = *copy.brain;
	}
	std::cout << "Assignment was made to Cat with type of " << type << "." << std::endl;
	return (*this);
}

// Member Functions
void Cat::makeSound() const
{
	std::cout << "Bark Bark Bark..." << std::endl;
}

Brain *Cat::getBrain() const
{
	return (brain);
}