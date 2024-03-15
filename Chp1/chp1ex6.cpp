//input.cpp chp1ex5
#include <iostream>
#include <string>

int main()
{
	std::cout << "What is your name? ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << std::endl << "And what is yours? ";
	std::cin >> name;
	std::cout << "Hello, " << name << "; nice to meet yout too!" << std::endl;
	return 0;
}