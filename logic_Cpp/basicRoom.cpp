//this is the cpp file for basicRoom
#include "basicRoom.h"
#include <iostream>

using namespace R;
using namespace std;


void basicRoom::makeNextRooms(basicRoom* room)
{

     int randNumber = rand() % 3000;

     if( randNumber <= 2000 )
     {
        room->roomType = 'n';
     }
     else if( randNumber >= 2500 )
     {
        room->roomType = 'd';
     }
     else
     {
        room->roomType = 'h';
     }
     room->containsNPC = true;
}



//could make this return a char to determine effect then?
void basicRoom::enterActions()
{
     char type = this->roomType;
     switch(type)
     {
        case 'n': 
            cout << "Nothing ended up happening in this room.\n\n\tPress Enter to continue.\n";
            break;
        case 'd': 
            cout << "The Player is damaged.\n\n\tPress Enter to continue.\n";
            break;
        default: 
            cout << "The Player is healed.\n\n\tPress Enter to continue.\n";

     }

}
