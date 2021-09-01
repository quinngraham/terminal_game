//maybe this will be the I/O stuff? idk yet
#include "inout.h"

using namespace O
using namespace std



//this takes the input and converts it to usable characters
//there is room for improvement here
char inputConverter(string command)
{
    if(command == "right" || command == "rihgt")
    {
         return 'r';
    }
    else if(command == "left")
    {
        return 'l';
    }
    else if(command == "middle" || command == "mid" || command == "midle" ||
     command == "center")
    {
        return 'm';
    }
    return '0';

}



//this takes the input converted to characters and does the correct actions
bool commandProcessor(char *arr){

    for(int i = 0; i < 5; i++)
    {
        //call the actionable method move here
        switch(arr[i])
        {
            case 'q': gameRunning = false;
                break;
            case 'r': cout << "going right\n";
                break;
            case 'l': cout << "going left\n";
                break;
            case 'm': cout << "staying straight\n";
                break;
            default: cout << "unkown command: passing this move.\n";

        }

    }
    cout << "\n";
}



//these are going to be the commands that are available to the player.
//for now, they will just be general commands.
void listCommands()
{
    cout << "Game commands:\n";
    cout << "\t|'done' ends the current game (data is saved).       |\n";
    cout << "\t|'mp' is the command that makes a new player.        |\n";
    cout << "\t|'lp' is the command that loads a previous player.   |(needs to be clearer)\n\n";
    cout << "These are the in-game commands:\n";
    cout << "\t|'right' takes the player to the room to the right.  |\n";
    cout << "\t|'left' takes the player to the room to the left.    |\n";
    cout << "\t|'middle' takes the player to the room in the middle.|\n";
}
