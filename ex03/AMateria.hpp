#ifndef AMATERIA_HPP 
#define AMATERIA_HPP
#include <iostream>

class AMateria
{
private:
    
public:
    AMateria(/* args */);
    ~AMateria();
    AMateria(std::string const & type);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    Animal &operator=(const Animal &equal) = 0;
};

class Materia : public AMateria
{
private:
    /* data */
public:
    Materia(/* args */);
    ~Materia();
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    Animal &operator=(const Animal &equal) = 0;
};

class Ice : public Materia
{
private:
    /* data */
public:
    Ice(/* args */);
    ~Ice();
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    Animal &operator=(const Animal &equal) = 0;
};

class Cure :  public Materia
{
private:
    /* data */
public:
    Cure(/* args */);
    ~Cure();
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    Animal &operator=(const Animal &equal) = 0;
};

#endif