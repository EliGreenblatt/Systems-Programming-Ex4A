#include "Character.hpp"

using namespace ariel;

Character::Character(std::string name, Point spawnLocation)
{

}

Character::Character()
{

}

Character::~Character()
{
    
}

bool Character::isAlive()
{
    return 0;
}

double Character::distance(Character * otherChar)
{
    return 0;
}

Point Character::getLocation()
{
    return Point(0,0);
}

std::string Character::getName()
{
    return name;
}

void Character::hit(int damageTaken)
{

}

std::string Character::print()
{
    return "test";
}

