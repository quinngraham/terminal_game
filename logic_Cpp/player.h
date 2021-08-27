//this is the player's character stuff
#pragma once
#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include <vector>

namespace P
{
    struct PLAYER
    {
        double health;
        std::vector<char> modifiers;
        std::vector<char> inv;
        std::vector<char> equips;
    };

    class player
    {
    public:
        double getHealth(PLAYER *p);
        std::vector<char> getEquips(PLAYER *p);
        std::vector<char> getInv(PLAYER *p);

    };
}
