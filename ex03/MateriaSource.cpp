#include "IMaterial.hpp"

MateriaSource::MateriaSource(/* args */)
{
}

MateriaSource::~MateriaSource()
{
	int i;

	i = 0;
	while (i < 4)
	{
		this->def[i] = NULL;
		i++;
	}
	
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (copy.def[i])
			this->def[i] = copy.def[i];
		i++;
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource &equal)
{
	int i;

	i = 0;
	while (i < 4)
	{	
		this->def[i] = equal.def[i];
		i++;
	}
	std::cout<<"Assignation operator called(MateriaSource)"<<std::endl;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *mat)
{
	int i = 0;

	while (i < 4)
	{
		if (this->def[i] != NULL)
			this->def[i] = mat;
		i++;
	}			
}

 AMateria* MateriaSource::createMateria(std::string const & type)
 {
	int i;

	i = 0;
	while (i < 4)
	{
		if (this->def[i] != NULL
			&& this->def[i]->getType() == type)
				return (this->def[i]->clone());
		i++;
	}
	return (0);
 }