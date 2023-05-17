#include "doctest.h"
#include "sources/Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "Team.hpp"
using namespace ariel;
using namespace std;

TEST_CASE("Test Constructors") 
{
    std::string name = "Eli";
    Point p = Point(0,0);
    CHECK_NOTHROW(Cowboy cowboy = Cowboy(name, p));
    CHECK_NOTHROW(OldNinja ninja = OldNinja(name,p));
    CHECK_NOTHROW(YoungNinja ninja = YoungNinja(name,p));
    CHECK_NOTHROW(TrainedNinja ninja = TrainedNinja(name,p));

    std::string name1 = "Dark Lord";
    std::string name2 = "Light Lord";
    Cowboy *goodCowboy = new Cowboy(name1,p);
    Cowboy *badCowboy = new Cowboy(name2,p);


    CHECK_NOTHROW(Team goodTeam(goodCowboy));
    CHECK_NOTHROW(Team badTeam(badCowboy));
}

TEST_CASE("Test Pre-GamePlay")
{
    std::string name = "Eli";
    Point p = Point(0,0);
    Cowboy *goodCowboy = new Cowboy(name,p);
    Cowboy *badCowboy = new Cowboy(name,p);
    Team teamA(goodCowboy);
    Team teamB(badCowboy);

    CHECK_EQ(teamA.stillAlive() ,1);
    CHECK_EQ(teamB.stillAlive() ,1);
    CHECK_NOTHROW(teamA.attack(&teamB));
    CHECK_NOTHROW(teamB.attack(&teamA));

    CHECK_THROWS(teamA.attack(&teamA));

    YoungNinja *goodNinja = new YoungNinja(name,p);
    YoungNinja *badNinja = new YoungNinja(name,p);

    CHECK_NOTHROW(teamA.add(goodNinja));
    CHECK_NOTHROW(teamB.add(badCowboy));
    
    CHECK_EQ(teamA.stillAlive(), 2);
    CHECK_EQ(teamB.stillAlive(), 2);

    
}

TEST_CASE("Testing Game")
{
    std::string name = "Eli";
    Point p = Point(0,0);
    Cowboy *goodCowboy = new Cowboy(name,p);
    Cowboy *badCowboy = new Cowboy(name,p);
    Team teamA(goodCowboy);
    Team teamB(badCowboy);

    while(teamA.stillAlive() > 0 && teamB.stillAlive() > 0)
    {
        // play the game till we have a winner
        CHECK_NOTHROW(teamA.attack(&teamB));
        CHECK_NOTHROW(teamB.attack(&teamA));
    }
    CHECK_NOTHROW(teamA.print());
    CHECK_NOTHROW(teamB.print());

}

TEST_CASE("Testing Character Functions")
{
    std::string name = "Eli";
    Point p = Point(0,0);
    Cowboy *goodCowboy = new Cowboy(name,p);
    Cowboy *badCowboy = new Cowboy(name,p);

    CHECK_EQ(goodCowboy->distance(badCowboy) , 0);
    CHECK_NOTHROW(goodCowboy->shoot(badCowboy));
    CHECK_THROWS(goodCowboy->distance(goodCowboy));

    int locationx = goodCowboy->getLocation().getX();
    int locationy = goodCowboy->getLocation().getY();

    int location2x = badCowboy->getLocation().getX();
    int location2y = badCowboy->getLocation().getY();

    CHECK_EQ(locationx,location2x);
    CHECK_EQ(locationy,location2y);

    CHECK_EQ(goodCowboy->distance(badCowboy), 0);
    CHECK_NOTHROW(goodCowboy->shoot(badCowboy));
    CHECK_THROWS(goodCowboy->shoot(goodCowboy));
}