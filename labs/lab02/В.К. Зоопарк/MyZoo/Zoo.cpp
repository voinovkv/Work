#include "Zoo.h"

#include <iostream>

void Zoo::ShowAllAnimals() const
	{
		for (auto& animal : _animals)
		{
			std::cout << animal->GetType() + " " + animal->GetName() << std::endl;
		}
	}

void Zoo::DeleteAnimal(std::string type, std::string name)
{
	auto iter = _animals.begin();
	while (iter != _animals.end())
	{
		if ((*iter)->GetType() == type && (*iter)->GetName() == name)
			iter = _animals.erase(iter);
		else
			++iter;

		}
	}

std::shared_ptr<Animal> Zoo::ChooseAnimal(std::string type, std::string name)
{
	auto iter = _animals.begin();
	while (iter != _animals.end())
	{
		if ((*iter)->GetType() == type && (*iter)->GetName() == name)
			return *iter;
		else
			++iter;
	}
	std::cout << type + " " + name + " not exist!\n";
	return nullptr;
}

void Zoo::AddAnimal(std::shared_ptr<Animal> newAnimal)
{
	if (newAnimal == nullptr)
		return;
	bool isExist = false;
	auto iter = _animals.begin();
	while (iter != _animals.end())
	{
		if ((*iter)->GetType() == newAnimal->GetType() && (*iter)->GetName() == newAnimal->GetName())
		{
			isExist = true;
			break;
		}
		++iter;
	}
	if (!isExist)
		_animals.push_back(newAnimal);
	else
		std::cout << newAnimal->GetType() + " " + newAnimal->GetName() + " already exist!\n";
	}
