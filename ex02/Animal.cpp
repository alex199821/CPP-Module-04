#include "Animal.hpp"

// Constructors

Animal::Animal() : type("Animal")
{
	std::cout << "Default Animal Constructor Called" << std::endl;
}

Animal::Animal(std::string &type) : type(type)
{
	std::cout << "Animal with type of " << type << " is Constructed." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal with type of " << type << " is destroyed." << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	std::cout << "Assignment was made to Animal with type of " << type << "." << std::endl;
	return (*this);
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
	*this = copy;
	std::cout << "Animal with type of " << type << " was copied." << std::endl;
};

// Member Functions
void Animal::makeSound() const
{
	std::cout << "***MAKING ANIMAL SOUNDS***" << std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}
