#ifndef TEAM_
#define TEAM_

#include "Point.hpp"
#include "Ninja.hpp"
#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"

namespace ariel
{
    class Team
    {
        public:
            Team(Character * leader);
            ~Team();
            void add(Character * newTeamMate);
            virtual void attack(Team * enemyTeam);
            int stillAlive();
            virtual std::string print();

        private:

            Character * leader;
            Character * team[10];
            int teamSize;
    };
}

#endif