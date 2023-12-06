#include "Animal.h"
#include <iostream>

Animal::Animal(std::string name, std::string reaction, double weight, std::string type)
:_name(name), _reaction(reaction), _weight(weight), _type(type)
{}

void Animal::GetInfo() const
{
	std::cout << "Name: " + _name + "\n" << "Weight: " + std::to_string(_weight) + "\n";
}

void Animal::Reacting() const
{
	std::cout << _reaction << std::endl;
}

std::string Animal::GetName() const
{
	return _name;
}

std::string Animal::GetType() const
{
	return _type;
}
