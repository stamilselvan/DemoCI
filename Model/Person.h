#include <iostream>

class Person {

private:
	std::string name;
	int age;

public:
	void setName(const std::string& newName);
	void setAge(int newAge);

	void display();
};