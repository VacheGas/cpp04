#include "Dog.hpp"

Dog::Dog() : Animal("dog")
{
    std::cout << "def run(Dog)" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "copy run(Dog)" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "dest run(Dog)" << std::endl;
}

Dog & Dog::operator=(const Dog &equal)
{
    std::cout<<"Assignation operator called(Dog)"<<std::endl;
	if(this == &equal)
		return (*this);
	this->type = equal.type;
	return (*this);
}

void Dog::makeSound() const
{
   std::cout << "Haf" << std::endl;
}