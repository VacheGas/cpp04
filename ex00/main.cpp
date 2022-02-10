#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const wrongAnimal* i2 = new wrongCat();
const wrongAnimal* meta2 = new wrongAnimal();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
std::cout << i2->getType() << " " << std::endl;
i2->makeSound(); //will output the cat sound!
meta2->makeSound();
}