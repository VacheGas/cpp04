#ifndef ANIMAL_HPP 
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string type;
	Animal(const std::string &type_new);
public:
    Animal();
    ~Animal();
    Animal &operator=(const Animal &equal);
    Animal(const Animal &copy);
    std::string getType() const;
    virtual void makeSound() const = 0;
};


#endif