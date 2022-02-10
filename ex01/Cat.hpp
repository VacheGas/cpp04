#ifndef CAT_HPP 
#define CAT_HPP

#include "animal.hpp"
class Cat : public Animal
{
public:
    Cat();
    ~Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &equal);
    void makeSound() const;
};

#endif
