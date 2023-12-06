#include "Tiger.h"
#include <iostream>


Tiger::Tiger(std::string name, std::string reaction, double weight, std::string color, std::string scary, std::string meat)
	:Animal(name, reaction, weight, "Tiger"), _color(color), _scary(scary), _meat(meat)
	{}

void Tiger::GetInfo() const
{
	std::cout << _type + " name: " + _name + "\n" << "Weight: " + std::to_string(_weight) + "\n"+"Color: " + _color + "\n" + "Likes: " + _meat + "\n";
	std::cout << _scary << std::endl;
}
void Tiger::ReactAsTiger()
{
	std::cout << "It tastes good to the tiger\n";
}
void Tiger::ReactAsTiger2()
{
	std::cout << "RRRRRrrrrRRRR!!!\n";
}
