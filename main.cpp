#include <iostream>
#include "consts.h"
#include "Model/Person.h"

int main() 
{
    std::cout << "\nHello, World! Welcome " + NAME + "\n";

    Person p;
    p.setName(NAME);
    p.setAge(10);
    p.display();

    return 0;
}
