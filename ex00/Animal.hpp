#pragma once

#include <cctype>
#include <iomanip>
#include <ios>
#include <iostream>
#include <ostream>
#include <sstream>
#include <string>

class Animal
{
  protected:
	std::string type;

  public:
	// Constructors
	Animal();
	Animal(std::string &type);
	Animal(const Animal &copy);
	Animal &operator=(const Animal &copy);
	~Animal();
	// Member Functions
    void makeSound();
};