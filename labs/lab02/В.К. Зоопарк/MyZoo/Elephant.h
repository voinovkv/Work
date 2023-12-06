#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

class Elephant : public Animal
{
public:
	Elephant(std::string name, std::string reaction, double weight, std::string ears, std::string smart, std::string size);
	void GetInfo() const override;
	void ReactAsElephant();
	void ReactAsElephant2();
private:
	std::string _size;
	std::string _ears;
	std::string _smart;
};
