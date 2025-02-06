#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
  private:
  public:
	// Constructors
	Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &copy);
	~Dog() override;
	// Constructors
	void makeSound() const override;
};