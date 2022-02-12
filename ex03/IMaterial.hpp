#ifndef IMATERIAL_HPP 
#define IMATERIAL_HPP
#include <iostream>
#include "AMateria.hpp"
class IMateriaSource
{
       public:
              virtual ~IMateriaSource() {}
              virtual void learnMateria(AMateria*) = 0;
              virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    AMateria *def[4];
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const &copy);
	MateriaSource &operator=(MateriaSource const &equal);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif