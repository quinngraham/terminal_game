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
        void enterActions();
        void makeNextRooms(basicRoom* room);

        bool containsNPC;
        char basicModifier;
        char roomType;
        basicRoom* right = nullptr;
        basicRoom* middle = nullptr;
        basicRoom* left = nullptr; 
    };





}

#endif
