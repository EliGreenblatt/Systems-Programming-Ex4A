#ifndef SMARTTEAM_
#define SMARTTEAM_
#include "Team.hpp"

namespace ariel
{
    class SmartTeam : Team
    {
        public:
            SmartTeam(Character * leader);
            std::string print() override;
            void attack(Team * enemyTeam) override;
    };
}

#endif