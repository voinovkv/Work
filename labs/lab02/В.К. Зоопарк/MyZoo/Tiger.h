#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

class Tiger : public Animal
{
public:
	Tiger(std::string name, std::string reaction, double weight, std::string color, std::string scary, std::string meat);
	void GetInfo() const override;
	void ReactAsTiger();
	void ReactAsTiger2();
private:
	std::string _color;
	std::string _scary;
	std::string _meat;
};

