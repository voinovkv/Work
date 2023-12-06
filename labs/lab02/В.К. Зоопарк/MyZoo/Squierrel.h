#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

class Squirrel : public Animal
{
public:
	Squirrel(std::string name, std::string reaction, double weight, std::string tail, std::string mex, std::string nuts);
	void GetInfo() const override;
	void ReactAsSquirrel();
	void ReactAsSquirrel2();
private:
	std::string _tail;
	std::string _mex;
	std::string _nuts;
};

