#ifndef AMMAERIAL_HPP 
#define AMMAERIAL_HPP
#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
protected:
			std::string type;   
public:
	AMateria();
	AMateria(std::string const & new_type);
	~AMateria();
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(Ice const &copy);
	Ice &operator=(const Ice &equal);
	AMateria* clone() const;
	void use(ICharacter& target);
};

class Cure :  public AMateria
{
public:
	Cure();
	~Cure();
	Cure(Cure const &copy);
	Cure &operator=(const Cure &equal);
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif