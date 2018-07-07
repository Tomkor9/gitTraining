#include <iostream>
#include "functions.h"

int main()
{
    entity * edek = new entity("edek");
    entity * fredek = new entity("fredek", 1.13, 9.9);
    std::cout<<"Objects log:\n";
    edek->show();
    fredek->show();
    std::cout<<"End of a log!\n";
    return 0;
}
