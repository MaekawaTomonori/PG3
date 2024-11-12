#include <iostream>
#include <memory>
#include <vector>

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main() {
	std::vector<std::unique_ptr<Animal>> animals;

    animals.push_back(std::make_unique<Cat>());
	animals.push_back(std::make_unique<Dog>());

    for (const auto& animal : animals){
        animal->Speak();
    }

	return 0;
}
