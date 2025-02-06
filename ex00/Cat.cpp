#include "Cat.hpp"

// Constructors

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	std::cout << "Assignment was made to Cat with type of " << type << "." << std::endl;
	return (*this);
}

Cat::Cat(const Cat &copy) : Animal()
{
	*this = copy;
	std::cout << "Cat with type of " << type << " was copied." << std::endl;
};

// Member Functions
void Cat::makeSound() const
{
	std::cout << "Meow Meow Meow..." << std::endl;
}