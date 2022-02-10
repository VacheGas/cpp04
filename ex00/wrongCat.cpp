#include "Cat.hpp"

wrongCat::wrongCat() : wrongAnimal("wrongCat")
{
    std::cout << "def run(wrongCat)" << std::endl;
}

wrongCat::wrongCat(const wrongCat &copy)
{
    std::cout << "copy run(wrongCat)" << std::endl;
    *this = copy;
}

wrongCat::~wrongCat()
{
    std::cout << "dest run(wrongCat)" << std::endl;
}

wrongCat & wrongCat::operator=(const wrongCat &equal)
{
    std::cout<<"Assignation operator called(wrongCat)"<<std::endl;
	if(this == &equal)
		return (*this);
	this->type = equal.type;
	return (*this);
}

void wrongCat::makeSound()const
{
   std::cout << " Wrong miau" << std::endl;
}