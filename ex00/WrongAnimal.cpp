#include "animal.hpp"

wrongAnimal::wrongAnimal()
{
    std::cout<<"def(wrongAnimal)"<<std::endl;
    this->type.assign("ananun");
}

wrongAnimal::~wrongAnimal()
{
    std::cout<<"des(wrongAnimal)"<<std::endl;
}

wrongAnimal::wrongAnimal(const std::string &name)
{
    std::cout<<"not def(wrongAnimal)"<<std::endl;
    this->type.assign(name);
}

wrongAnimal & wrongAnimal::operator=(const wrongAnimal &equal)
{
    std::cout<<"Assignation operator called(Dog)"<<std::endl;
	if(this == &equal)
		return (*this);
	this->type = equal.type;
	return (*this);
}

wrongAnimal::wrongAnimal(const wrongAnimal &copy)
{
	std::cout << "copy constructors running"<<std::endl;
	this->type = copy.type;
}

std::string wrongAnimal::getType() const
{
    return (this->type);
}

void  wrongAnimal::makeSound() const
{
    std::cout << "Wrong haf kam miau" << std::endl;
}
