#ifndef CHARACTER_
#define CHARACTER_

#include <string>
#include "Point.hpp"
namespace ariel
{
    class Character
    {
        public:
            virtual ~Character();
            Character();
            Character(std::string name , Point spawnPoint);
             Character(const Character &otherCharacter);
            bool isAlive();
            double distance(Character * otherChar);
            Point getLocation();
            std::string getName();
            void hit(int damageTaken);
            virtual std::string print();

            Point location;
            int hitpoints;
            std::string name;
    };
}


#endif