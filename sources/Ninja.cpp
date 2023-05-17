#include "Ninja.hpp"
using namespace ariel;

Ninja::Ninja(std::string name, Point spawnLocation) : Character(name, spawnLocation)
{

}

Ninja::~Ninja()
{
    
}

void Ninja::move(Character * enemy)
{
    
}

void Ninja::slash(Character * enemy)
{
    
}

std::string Ninja::print()
{
    return "test";
}