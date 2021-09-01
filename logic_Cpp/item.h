//this is the general item stuff
#pragma once
#include <vector>
#include <string>


namespace I
{
    struct GENITEM
    {
        double baseDam;
        double durability; //maybe, i hate this mechanic
        double damOverTime;
        string itemID;

    };

    class item
    {
    public:
        /*
            Not sure yet how to do the item data, string doesnt really
            feel like a good idea in c++. In Java that's probably the way to
            go though.
        */
        std::vector<double>::iterator listStats();
    };
}
