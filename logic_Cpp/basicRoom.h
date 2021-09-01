//basicRoom.h
#ifndef BASICROOM_H
#define BASICROOM_H
#include "stdio.h"
#include "stdlib.h"
#include <vector>
#include <string>


namespace R
{


    class basicRoom
    {
    public:
        bool enterActions();
        void makeNextRooms();

        bool containsNPC;
        char basicModifier;
        char roomType;
        basicRoom* right = nullptr;
        basicRoom* middle = nullptr;
        basicRoom* left = nullptr; 
    };





}

#endif
