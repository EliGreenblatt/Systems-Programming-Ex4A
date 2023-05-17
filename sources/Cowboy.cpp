#include "Cowboy.hpp"
using namespace ariel;

Cowboy::Cowboy(std::string name, Point spawnLocation) : Character(name, spawnLocation)
{

}

Cowboy::~Cowboy()
{
    
}

void Cowboy::shoot(Character * enemy)
{

}

bool Cowboy::hasboolets()
{
    return 0;
}

void Cowboy::reload()
{
    
}

std::string Cowboy::print()
{
    return "test";
}