#include "Dog.hpp"

// Constructors

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	std::cout << "Assignment was made to Dog with type of " << type << "." << std::endl;
	return (*this);
}

Dog::Dog(const Dog &copy) : Animal()
{
	*this = copy;
	std::cout << "Dog with type of " << type << " was copied." << std::endl;
};

// Member Functions
void Dog::makeSound() const
{
	std::cout << "Bark Bark Bark..." << std::endl;
}