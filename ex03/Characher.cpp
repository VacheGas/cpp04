#include "ICharacter.hpp"

Character::Character()
{
	this->def_set();
}

void Character::def_set()
{
	int i;

	i = 0;
	while (i < 4)
		this->arr[i++] = NULL;
}

Character::~Character()
{
}

Character::Character(std::string const & new_name)
{
	this->name = new_name;
	def_set();
}

Character::Character(Character const &copy)
{
	*this = copy;
}

Character & Character::operator=(const Character &equal)
{
	int i;

	std::cout<<"Assignation operator called(Character)"<<std::endl;
	if(this == &equal)
		return (*this);
	this->name = equal.name;
	i = 0;
	while (i < 4)
	{
		this->arr[i] = equal.arr[i];
		++i;
	}
	return (*this);
}

std::string const & getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	int i;
	
	i = 0;
	while (i < 4)
	{
		if(this->arr[i] == NULL)
			arr[i] = a;
		i++;
	}
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::unequip(int idx)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (i == idx)
		{
			this->arr[i] = NULL;
			return ;
		}
		i++;
	}
}

void Character::use(int idx, ICharacter& target)
{
	int i;
	while (i < 4)
	{
		if (i == idx)
		{
			this->arr[i]->use(target);
			return ;
		}
		i++;
	}
	
}
