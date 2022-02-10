#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
    std::cout << "def run(Cat)" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "copy run(Cat)" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "dest run(Cat)" << std::endl;
}

Cat & Cat::operator=(const Cat &equal)
{
    std::cout<<"Assignation operator called(Cat)"<<std::endl;
	if(this == &equal)
		return (*this);
	this->type = equal.type;
	return (*this);
}

void Cat::makeSound()const
{
   std::cout << "miau" << std::endl;
}