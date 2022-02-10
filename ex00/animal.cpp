#include "animal.hpp"

Animal::Animal()
{
    std::cout<<"def(Animal)"<<std::endl;
    this->type.assign("ananun");
}

Animal::~Animal()
{
    std::cout<<"des(Animal)"<<std::endl;
}

Animal::Animal(const std::string &name)
{
    std::cout<<"not def(Animal)"<<std::endl;
    this->type.assign(name);
}

Animal & Animal::operator=(const Animal &equal)
{
    std::cout<<"Assignation operator called(Dog)"<<std::endl;
	if(this == &equal)
		return (*this);
	this->type = equal.type;
	return (*this);
}

Animal::Animal(const Animal &copy)
{
	std::cout << "copy constructors running"<<std::endl;
	this->type = copy.type;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "haf kam miau" << std::endl;
}

