#include "Person.h"

void Person::setName(const std::string& newName)
{
	this->name = newName;
}

void Person::setAge(int newAge)
{
	this->age = newAge;
}

void Person::display()
{
	std::cout << "\nAge : " << this->age;
	std::cout << "\nName : " + this->name << std::endl;
	
}