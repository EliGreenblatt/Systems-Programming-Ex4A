#include "SmartTeam.hpp"
using namespace ariel;

SmartTeam::SmartTeam(Character * leader) : Team(leader)
{

}

std::string SmartTeam::print()
{
    return "test";
}

void SmartTeam::attack(Team * enemyTeam)
{
    
}