#ifndef DOG_HPP 
#define DOG_HPP
#include "animal.hpp"

class Dog : public Animal
{ 
public:
    Dog();
    ~Dog();
    Dog &operator=(const Dog &equal);
    Dog(const Dog &copy);
    void makeSound() const;
};

#endif