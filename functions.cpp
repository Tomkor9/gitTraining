#include "functions.h"
#include <iostream>

int entity::instances = 0;

entity::entity()
{
    instances++;
    ID = instances;
    x = y = 0;
    name = "entity" + std::to_string(instances);
}

entity::entity (std::string nam, double pos_x, double pos_y)
{
    instances++;
    ID = instances;
    name = nam;
    x = pos_x;
    y = pos_y;
}

entity::~entity()
{
    instances--;
}

void entity::setName (std::string name) {this->name = name;}
void entity::setPos (double pos_x, double pos_y) {x = pos_x; y = pos_y;}
void entity::setX (double pos_x) {x = pos_x;}
void entity::setY (double pos_y) {y = pos_y;}

void entity::show()
{
    std::cout << name << "; ID: " << ID <<""<< std::endl
    << "pos_X: "<< x << std::endl
    << "pos_Y: "<< y << std::endl;
}

entity entity::operator+(const entity & en) const
{
    entity sum;
    sum.setX( x + en.x );
    sum.setY( y + en.y );
    sum.setName( name + "+" + en.name);
    return sum;
}