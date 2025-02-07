#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain Constructor Called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is being destroyed." << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; ++i)
	{
		ideas[i] = copy.ideas[i];
	}
	std::cout << "Brain was copied (Copy constructor called)" << std::endl;
};

Brain &Brain::operator=(const Brain &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; ++i)
		{
			ideas[i] = copy.ideas[i];
		}
	}
	std::cout << "Assignment was made to Brain." << std::endl;
	return (*this);
}