#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & new_type)
{
	this->type = new_type; 
}

AMateria ::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << this->type << "and name equal" << target.getName() << std::endl;
}
