#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
    public:
    	// Constructors
        WrongCat();
        WrongCat(const WrongCat &copy);
        WrongCat &operator=(const WrongCat &copy);
        ~WrongCat();
        // Methods
        void makeSound() const;
};