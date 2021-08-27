//this is the cpp file for basicRoom
#include "basicRoom.h"
#include <iostream>

using namespace N;
using namespace std;





bool basicRoom::enter_actions(ROOM r)
{
    vector<char> inter = r.enterActions;

    for(vector<char>::iterator it = inter.begin(); it != inter.end(); it++)
    {
        char c = *it;
        switch(c)
        {
            default: cout << "There is nothing special occurring.\n";

        }
    }
    return true;
}
