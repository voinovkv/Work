#include <iostream>
#include <string>
#include "Tiger.h"
#include "Elephant.h"
#include "Squierrel.h"
#include "Zoo.h"

int steak_check()
{
	int  steak; 
	int z = 0;
		while (z == 0)
		{
			std::cin >> steak;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Try again!" << std::endl;
			}
			else
				z=1;
		}
		return steak;
}

int vibor()
{
	int a;
	std::cin >> a;
	while (std::cin.fail() or (a > 6 or a < 1))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Try again!" << std::endl;
		std::cin >> a;
	}
	return a;
}

int main()
{
	Zoo zoo;
	auto belka = std::make_shared<Squirrel>("Lyba", "Good", 10, "long","black","hazelnut");
	zoo.AddAnimal(belka);
	auto tigr = std::make_shared<Tiger>("Tigrula", "RRRR", 100,"black","very scary","chicken");
	zoo.AddAnimal(tigr);
	auto slon = std::make_shared<Elephant>("Elef", "I am a Slon", 5000, "big", "very smart", "normal");
	zoo.AddAnimal(slon);
	auto slon1 = std::make_shared<Elephant>("Elep", "AAAAAAAAAAAAAA", 10000, "very big", "not smart", "very big");
	zoo.AddAnimal(slon1);
	int x = 0;
	std::cout << "Welcome to the Zoo!" << std::endl;
	std::cout << std::endl;
	while (x != 5)
	{
		std::cout << std::endl;
		std::cout << "What do you want to do?" << std::endl;
		std::cout << "Enter 1 to show all animals" << std::endl;
		std::cout << "Enter 2 to choose animal" << std::endl;
		std::cout << "Enter 3 to add animal" << std::endl;
		std::cout << "Enter 4 to delete animal" << std::endl;
		std::cout << "Enter 5 to exit" << std::endl;
		x = vibor();
		if (x == 1)
		{
			std::cout << std::endl;
			zoo.ShowAllAnimals();
		}
		if (x == 2)
		{
			std::cout << std::endl;
			std::cout << "Enter 1 to choose tiger" << std::endl;
			std::cout << "Enter 2 to choose elephant" << std::endl;
			std::cout << "Enter 3 to choose squirrel" << std::endl;
			int y;
			y = vibor();
			std::string choose_name;
			if (y == 1)
			{
				std::cout << std::endl;
				std::cout << "Enter name of animal" << std::endl;
				std::cin >> choose_name;
				auto mytigr = zoo.ChooseAnimal("Tiger", choose_name);
				if (mytigr != nullptr)
				{
					int c = 0;
					int steak;
					while (c==0)
					{
						std::cout << std::endl;
						mytigr->GetInfo();
						std::cout << std::endl;
						std::cout << "Enter 1 to give the tiger a steak" << std::endl;
						std::cout << "Enter 2 to tease the tiger" << std::endl;
						std::cout << "Enter 3 to pet the tiger" << std::endl;
						std::cout << "Enter any other number to exit" << std::endl;
						std::cout << std::endl;
						int steak = steak_check();
						std::cout << std::endl;
						if (steak == 1)
						{
							auto tochnoTigr = std::dynamic_pointer_cast<Tiger>(mytigr);
							if (tochnoTigr != nullptr)
								tochnoTigr->ReactAsTiger();
						}
						if (steak == 2)
						{
							auto tochnoTigr = std::dynamic_pointer_cast<Tiger>(mytigr);
							if (tochnoTigr != nullptr)
								tochnoTigr->ReactAsTiger2();
						}
						if (steak == 3)
							mytigr->Reacting();
						if (steak != 1 and steak != 2 and steak != 3)
							c = 1;
					}
				}
			}
			if (y == 2)
			{
				std::cout << std::endl;
				std::cout << "Enter name of animal" << std::endl;
				std::cin >> choose_name;
				auto mytigr = zoo.ChooseAnimal("Elephant", choose_name);
				if (mytigr != nullptr)
				{
					int c = 0;
					int steak;
					while (c==0)
					{
						std::cout << std::endl;
						mytigr->GetInfo();
						std::cout << std::endl;
						std::cout << "Enter 1 to squeak like a mouse" << std::endl;
						std::cout << "Enter 2 to give the elephant cabbage" << std::endl;
						std::cout << "Enter 3 to pet the elephant" << std::endl;
						std::cout << "Enter any other number to exit" << std::endl;
						int steak = steak_check();
						std::cout << std::endl;
						if (steak == 1)
						{
							auto tochnoTigr = std::dynamic_pointer_cast<Elephant>(mytigr);
							if (tochnoTigr != nullptr)
								tochnoTigr->ReactAsElephant();
						}
						if (steak == 2)
						{
							auto tochnoTigr = std::dynamic_pointer_cast<Elephant>(mytigr);
							if (tochnoTigr != nullptr)
								tochnoTigr->ReactAsElephant2();
						}
						if (steak == 3)
							mytigr->Reacting();
						if (steak != 1 and steak != 2 and steak != 3)
							c = 1;
					}
				}
			}
			if (y == 3)
			{
				std::cout << std::endl;
				std::cout << "Enter name of animal" << std::endl;
				std::cout << std::endl;
				std::cin >> choose_name;
				auto mytigr = zoo.ChooseAnimal("Squirrel", choose_name);
				if (mytigr != nullptr)
				{
					int c = 0;
					int steak;
					while (c==0)
					{
						std::cout << std::endl;
						mytigr->GetInfo();
						std::cout << std::endl;
						std::cout << "Enter 1 to eat nuts infront of squirrel" << std::endl;
						std::cout << "Enter 2 to tease the squirrel" << std::endl;
						std::cout << "Enter 3 to pet the squirrels" << std::endl;
						std::cout << "Enter any other number to exit" << std::endl;
						int steak = steak_check();
						if (steak == 1)
						{
							auto tochnoTigr = std::dynamic_pointer_cast<Squirrel>(mytigr);
							if (tochnoTigr != nullptr)
								std::cout << std::endl;
								tochnoTigr->ReactAsSquirrel();
						}
						if (steak == 2)
						{
							auto tochnoTigr = std::dynamic_pointer_cast<Squirrel>(mytigr);
							if (tochnoTigr != nullptr)
								std::cout << std::endl;
								tochnoTigr->ReactAsSquirrel2();
						}
						if (steak == 3)
						{
							std::cout << std::endl;
							mytigr->Reacting();
						}
						if (steak != 1 and steak != 2 and steak != 3)
							c = 1;
					}
				}
			}
		}
		if (x == 3)
		{
			std::cout << std::endl;
			std::cout << "Enter 1 to add tiger" << std::endl;
			std::cout << "Enter 2 to add elephant" << std::endl;
			std::cout << "Enter 3 to add squirrel" << std::endl;
			std::cout << "Enter 4 to exit" << std::endl;
			int y;
			y = vibor();
			std::string react;
			std::string add_name;
			std::string spec1;
			std::string spec2;
			std::string spec3;
			if (y == 1)
			{
				std::cout << std::endl;
				std::cout << "Enter name of animal" << std::endl;
				std::cin >> add_name;
				std::cout << "Enter weight of animal" << std::endl;
				int massa = steak_check();
				std::cout << "Enter how will animal react to being petted?" << std::endl;
				std::cin >> react;
				std::cout << "Enter the color of the tiger" << std::endl;
				std::cin >> spec1;
				std::cout << "Enter how scary is it? (for example, very scary)" << std::endl;
				std::cin >> spec2;
				std::cout << "Enter the kind of meat he likes" << std::endl;
				std::cin >> spec3;
				auto tigr = std::make_shared<Tiger>(add_name, react, massa, spec1, spec2, spec3);
				zoo.AddAnimal(tigr);
			}
			if (y == 2)
			{
				std::cout << std::endl;
				std::cout << "Enter name of animal" << std::endl;
				std::cin >> add_name;
				std::cout << "Enter weight of animal" << std::endl;
				int massa=steak_check();
				std::cout << "Enter how will animal react to being petted?" << std::endl;
				std::cin >> react;
				std::cout << "Enter the size of the elephant's ears." << std::endl;
				std::cin >> spec1;
				std::cout << "Enter how smart the elephant is?" << std::endl;
				std::cin >> spec2;
				std::cout << "Enter the size of the elephant (for example, very small elephant)" << std::endl;
				std::cin >> spec3;
				auto slon = std::make_shared<Elephant>(add_name, react, massa, spec1, spec2, spec3);
				zoo.AddAnimal(slon);
			}
			if (y == 3)
			{
				std::cout << std::endl;
				std::cout << "Enter name of animal" << std::endl;
				std::cin >> add_name;
				std::cout << "Enter weight of animal" << std::endl;
				int massa = steak_check();
				std::cout << "Enter how will animal react to being petted?" << std::endl;
				std::cin >> react;
				std::cout << "Enter what's its tail like?" << std::endl;
				std::cin >> spec1;
				std::cout << "Enter kind of fur does a squirrel have?" << std::endl;
				std::cin >> spec2;
				std::cout << "Enter the type of nuts it likes" << std::endl;
				std::cin >> spec3;
				auto belka = std::make_shared<Squirrel>(add_name, react, massa, spec1, spec2, spec3);
				zoo.AddAnimal(belka);
			}
			if (y!=1 and y!=2 and y!=3)
				std::cout << "Try again later!" << std::endl;
		}
		if (x == 4)
		{
			std::cout << std::endl;
			std::cout << "Enter 1 to delete tiger" << std::endl;
			std::cout << "Enter 2 to delete elephant" << std::endl;
			std::cout << "Enter 3 to delete squirrel" << std::endl;
			std::cout << "Enter 4 to exit" << std::endl;
			int y;
			y = vibor();
			std::string del_name;
			if (y == 1)
			{
				std::cout << std::endl;
				std::cout << "Enter name of animal" << std::endl;
				std::cin >> del_name;
				zoo.DeleteAnimal("Tiger", del_name);
			}
			if (y == 2)
			{
				std::cout << std::endl;
				std::cout << "Enter name of animal" << std::endl;
				std::cin >> del_name;
				zoo.DeleteAnimal("Elephant", del_name);
			}
			if (y == 3)
			{
				std::cout << std::endl;
				std::cout << "Enter name of animal" << std::endl;
				std::cin >> del_name;
				zoo.DeleteAnimal("Squirrel", del_name);
			}
			if (y>3)
				std::cout << "Try again later!" << std::endl;
		}
		if (x == 5)
		{
			std::cout << std::endl;
			std::cout << "Thank you for visiting the Zoo!" << std::endl;
		}
		if (x == 6)
			std::cout << "Try again!" << std::endl;
	}
}