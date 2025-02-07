#pragma once

#include <cctype>
#include <iomanip>
#include <ios>
#include <iostream>
#include <ostream>
#include <sstream>
#include <string>

class Brain
{
  private:
	std::string ideas[100];

  public:
	// Constructors
	Brain();
	Brain(const Brain &copy);
	~Brain();
	Brain &operator=(const Brain &copy);
};