#ifndef NINJA_
#define NINJA_

#include "Character.hpp"

namespace ariel
{
    class Ninja: public Character
    {
        public:

            Ninja(std::string name , Point spawnLocation);
            virtual ~Ninja();
            void move(Character * enemy);
            void slash(Character * enemy);
            virtual std::string print();
            int speed;
            int damage;
            virtual void pureVirtualFunction() {};
    };
}


#endif