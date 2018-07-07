#include <iostream>
#include "functions.h"

int main()
{
    int a = 0;
    entity * edek = new entity("edek");
    entity * fredek = new entity("fredek", 1.13, 9.9);
    edek->show();
    fredek->show();
    if (a == 0)
    std::cout<<"Zmienna a wynosi zero!\n";
    return 0;
}
