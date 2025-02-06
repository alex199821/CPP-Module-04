#include "WrongAnimal.hpp"

// Constructors

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "Default WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string &type) : type(type)
{
	std::cout << "WrongAnimal with type of " << type << " is Constructed." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal with type of " << type << " is destroyed." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	std::cout << "Assignment was made to WrongAnimal with type of " << type << "." << std::endl;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
	*this = copy;
	std::cout << "WrongAnimal with type of " << type << " was copied." << std::endl;
};
// Member Functions
void WrongAnimal::makeSound() const
{
	std::cout << "***MAKING WRONGANIMAL SOUNDS***" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}
