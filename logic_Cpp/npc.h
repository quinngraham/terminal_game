//basic interactable character
#pragma once
#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include <vector>

namespace N
{
    struct NPC
    {
        double health;
        double damage;
        char npcType;
        std::vector<char> modifiers;
        bool hostile;
    };



    class npc
    {
        public:
            
    };



}
