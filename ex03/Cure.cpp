#include "AMateria.hpp"

Cure::Cure() : AMateria("Cure")
{
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << this->type << "shoots an ice bolt at" << target.getName();
}

Cure::Cure(Cure const &copy)
{
	*this = copy;
}

Cure & Cure::operator=(const Cure &equal)
{
	std::cout<<"Assignation operator called(Cure)"<<std::endl;
	if(this == &equal)
		return (*this);
	this->type = equal.type;
	return (*this);
}