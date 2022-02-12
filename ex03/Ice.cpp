#include "AMateria.hpp"

Ice::Ice() : AMateria("Ice")
{
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << this->type << "shoots an ice bolt at" << target.getName();
}

Ice::Ice(Ice const &copy)
{
	*this = copy;
}

Ice & Ice::operator=(const Ice &equal)
{
	std::cout<<"Assignation operator called(Ice)"<<std::endl;
	if(this == &equal)
		return (*this);
	this->type = equal.type;
	return (*this);
}