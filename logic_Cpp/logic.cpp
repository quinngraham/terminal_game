#include "stdio.h"
#include "stdlib.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "basicRoom.h"
#include "npc.h"
#include "player.h"


using namespace std;

//declarations for methods
void commandProcessor(char *arr);
char inputConverter(string command);
void getInput();
P::PLAYER initPlayer(FILE playerFile);
void listCommands();
vector<R::ROOM> createNextRooms();




//declarations for random globals i think i might need
bool gameRunning;
char commandArray[] = {' ', ' ', ' ', ' ', ' '};//not sure if doing this is even req lol
P::PLAYER *currentPlayer;


//can expand functionality to parse saved text files to save gamestate and stuff
int main(int argc, char const *argv[]) {
    gameRunning = true;

    cout << "Thank you for playing the game! Please do not use uppercase letters, " <<
    "as you will not get a correct command response. Use 'c' or 'command' to get " <<
    "available commands.\n";

    while(gameRunning)
    {
        getInput();
    }
    return 0;
}






//this is just to clean up the main funciton
void getInput()
{
    string s;
    int counter = 0;
    while(counter < 5)
    {
        cin >> s;
        if(s == "done")
        {
            gameRunning = false;
            return;
        }
        else if(s == "c" || s == "commands")
        {
            //cout << "Available commands are: \n";
            listCommands();
            counter--;
            //loop with function that prints available commands, todo
        }
        else if(s == "mp")
        {
            cout << "Please confirm you would like to make a new player: y/n";
            char confirmation;
            cin >> confirmation;
            if(confirmation == 'y')
            {
                currentPlayer = new P::PLAYER;
                currentPlayer->health = 100.0;
            }
        }
        else
        {
            commandArray[counter] = inputConverter(s);
        }
        counter++;
    }

    commandProcessor(commandArray);
    cout << "This is where other actions would occur.\n";
    cout << "Press enter to continue.\n";
    cin.ignore();//not sure of the functionality of this, might need .get()
    counter = 0;
}


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
void commandProcessor(char *arr){

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


//this is (hopefully) going to create the next 3 rooms in order from 0:left, 1:middle,
//2:right
vector<R::ROOM> createNextRooms()
{
    vector<R::ROOM> r;
    R::ROOM *left = new R::ROOM;
    R::ROOM *middle = new R::ROOM;
    R::ROOM *right = new R::ROOM;
    return r;
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
