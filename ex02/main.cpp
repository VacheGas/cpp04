#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
const Dog* j = new Dog();
const Cat* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
}