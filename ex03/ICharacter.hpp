#ifndef ICHARACTER_HPP 
#define ICHARACTER_HPP
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter();
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
	protected:
		std::string name;
		AMateria *arr[4];
		void def_set();
	public:
		Character();
		~Character();
		Character(std::string const & new_name);
		Character(Character const &copy);
		Character &operator=(const Character &equal);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
#endif