#include "Sandwich.h"
#include <iostream>

void Sandwich::Read(){
	std::cout << "name: ";
	std::cin >> name;
}

void Sandwich::Write(){
	std::cout << name << std::endl;
}