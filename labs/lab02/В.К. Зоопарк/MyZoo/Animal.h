#pragma once
#include <string>

class Animal
{
protected:
	std::string _name;
	std::string _reaction;
	double _weight;
	std::string _type;
public:

	Animal(std::string name, std::string reaction, double weight, std::string type);

	virtual ~Animal() = default;

	virtual void GetInfo() const;
	void Reacting() const;
	std::string GetName() const;
	std::string GetType() const;
};
