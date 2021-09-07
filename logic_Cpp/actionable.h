//this is going to be the action stuff (math time)
#pragma once


namespace A
{


    class actionable
    {
    public:
        {
            bool attack(NPC n);
            bool attack(PLAYER p);
            bool defend(NPC n);
            bool defend(PLAYER p);
            
        }
    }
}
