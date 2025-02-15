#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
  private:
	Brain *brain;

  public:
	// Constructors
	Cat();
	Cat(const Cat &copy);
	Cat &operator=(const Cat &copy);
	~Cat() override;
	// Methods
	void makeSound() const override;
	Brain *getBrain() const;
};