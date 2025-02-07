#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
  private:
	Brain *brain;

  public:
	// Constructors
	Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &copy);
	~Dog() override;
	// Methods
	void makeSound() const override;
	Brain *getBrain() const;
};