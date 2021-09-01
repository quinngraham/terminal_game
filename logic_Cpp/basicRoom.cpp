//this is the cpp file for basicRoom
#include "basicRoom.h"
#include <iostream>

using namespace R;

void basicRoom::makeNextRooms()
{
     int randNumber = rand() % 3000;

     if( randNumber <= 2000 )
     {
        this->right->roomType = 'n';
     }
     else if( randNumber >= 2500 )
     {
        this->right->roomType = 'd';
     }
     else
     {
        this->right->roomType = 'h';
     }

     //not sure what to do with modifiers or other characters for now
     this->right->basicModifier = '1';
     this->right->containsNPC = true;
     randNumber = rand() % 3000;
     if( randNumber <= 2000 )
     {
        this->middle->roomType = 'n';
     }
     else if( randNumber >= 2500 )
     {
        this->middle->roomType = 'd';
     }
     else
     {
        this->middle->roomType = 'h';
     }

     //not sure what to do with modifiers or other characters for now
     this->middle->basicModifier = '1';
     this->middle->containsNPC = true;
     randNumber = rand() % 3000;
     if( randNumber <= 2000 )
     {
        this->left->roomType = 'n';
     }
     else if( randNumber >= 2500 )
     {
        this->left->roomType = 'd';
     }
     else
     {
        this->left->roomType = 'h';
     }

     //not sure what to do with modifiers or other characters for now
     this->left->basicModifier = '1';
     this->left->containsNPC = true;  

}



//could make this return a char to determine effect then?
bool basicRoom::enterActions()
{
     
     char type = this->roomType;
     switch(c)
     {
        case 'n': cout << "Nothing ended up happening in this room.\n";
            break;
        case 'd': cout << "Player is damaged.\n";
            break;
        default: "The Player is healed.\n";

     }

} 
