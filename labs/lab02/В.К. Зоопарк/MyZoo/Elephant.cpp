#include "Elephant.h"
#include <iostream>

Elephant::Elephant(std::string name, std::string reaction, double weight, std::string ears, std::string smart, std::string size)
	:Animal(name, reaction, weight, "Elephant"), _ears(ears), _smart(smart), _size(size)
{}
void Elephant::GetInfo() const
{
	std::cout << _type + " name: " + _name + "\n" << "Size: " + _size + "\n" << "Size of ears : " + _ears + "\n";
	std::cout << _smart << std::endl;
}
void Elephant::ReactAsElephant()
{
	std::cout << "The elephant ran away\n";
}
void Elephant::ReactAsElephant2()
{
	std::cout << "The elephant ate the whole cabbage!\n";
}
