#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
    private:
    public:
    	// Constructors
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        ~Cat() override;
    	// Constructors
    	void makeSound() const override;

};