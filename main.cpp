#include <iostream>
#include "functions.h"

int main()
{
    entity * edek = new entity("edek");
    entity * fredek = new entity("fredek", 1.13, 9.9);
    std::cout<<"Objects log:\n";
    edek->show();
    fredek->show();
    return 0;
}
