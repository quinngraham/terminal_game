//basicRoom.h
#ifndef BASICROOM_H
#define BASICROOM_H
#include "stdio.h"
#include "stdlib.h"
#include <vector>
#include <string>


namespace R
{


    struct ROOM
    {
        std::vector<char> roomQuals;
        std::vector<char> enterActions;
    };


    class basicRoom
    {
    public:
        bool enter_actions(ROOM r);
    };





}

#endif
