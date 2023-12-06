#include "Squierrel.h"
#include <iostream>

Squirrel::Squirrel(std::string name, std::string reaction, double weight, std::string tail, std::string mex, std::string nuts)
	:Animal(name, reaction, weight, "Squirrel"), _tail(tail), _mex(mex), _nuts(nuts)
{}
void Squirrel::GetInfo() const 
{
	std::cout << _type + " name: " + _name + "\n" << "Weight: " + std::to_string(_weight) + "\n" << "Tail: " + std::string(_tail) + "\n" << "Likes: " + std::string(_nuts) + "\n" << "Fur: " + std::string(_mex) + "\n";
	std::cout << "Very small squirrel" << std::endl;
}
void Squirrel::ReactAsSquirrel()
{
	std::cout << "The squirrel stole the nut!\n";
}
void Squirrel::ReactAsSquirrel2()
{
	std::cout << "Squirrels in your pants!\n";
}
