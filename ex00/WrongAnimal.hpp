#pragma once

#include <cctype>
#include <iomanip>
#include <ios>
#include <iostream>
#include <ostream>
#include <sstream>
#include <string>

class WrongAnimal
{
  protected:
	std::string type;

  public:
	// Constructors
	WrongAnimal();
	WrongAnimal(std::string &type);
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal &operator=(const WrongAnimal &copy);
	~WrongAnimal();
	// Member Functions
	void makeSound() const;
	std::string getType(void) const;
};