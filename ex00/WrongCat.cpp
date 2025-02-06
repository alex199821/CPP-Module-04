#include "WrongCat.hpp"

// Constructors

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deconstructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	std::cout << "Assignment was made to WrongCat with type of " << type << "." << std::endl;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
	*this = copy;
	std::cout << "WrongCat with type of " << type << " was copied." << std::endl;
};

// Member Functions
void WrongCat::makeSound() const
{
	std::cout << "WrongMeow WrongMeow WrongMeow..." << std::endl;
}