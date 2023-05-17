#ifndef TEAM2_
#define TEAM2_
#include "Team.hpp"
namespace ariel
{
    class Team2 : public Team
    {
        public:
            Team2(Character * leader);
            std::string print() override;
            void attack(Team * enemyTeam) override;
    };
}

#endif