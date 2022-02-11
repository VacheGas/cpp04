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
    AMateria(/* args */);
    ~AMateria();
    AMateria(std::string const & new_type);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

class Materia : public AMateria
{
private:
    /* data */
public:
    Materia(/* args */);
    ~Materia();
    Materia(std::string const & new_type);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

/*class Ice : public Materia
{
private:
   
public:
    Ice();
    ~Ice();
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    Animal &operator=(const Animal &equal) = 0;
};

class Cure :  public Materia
{
private:
   
public:
    Cure();
    ~Cure();
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    Animal &operator=(const Animal &equal) = 0;
};
*/
#endif