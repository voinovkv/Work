#pragma once
#include <memory>
#include <vector>

#include "Animal.h"

class Zoo
{
public:
	//Показать всех животных
	void ShowAllAnimals() const;

	//Удалить животное
	void DeleteAnimal(std::string type, std::string name);

	//Добавить животное
	void AddAnimal(std::shared_ptr<Animal>);

	//Выбрать конкретное животное
	std::shared_ptr<Animal> ChooseAnimal(std::string type, std::string name);

private:
	std::vector<std::shared_ptr<Animal>> _animals;
};
