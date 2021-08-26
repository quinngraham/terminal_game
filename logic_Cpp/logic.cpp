#include "stdio.h"
#include "stdlib.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//declarations for methods
void commandProcessor(char *arr);
char inputConverter(string command);



//declarations for random globals i think i might need
bool gameRunning;
char commandArray[] = {' ', ' ', ' ', ' ', ' '};

int main(int argc, char const *argv[]) {
    gameRunning = true;
    bool waiting = false;
    string s;
    string commandArr[6];
    int counter = 0;

    cout << "Thank you for playing the game! Please do not use uppercase letters, " <<
    "as you will not get a correct command response. Use 'c' or 'command' to get " <<
    "available commands.\n";

    while(gameRunning)
    {
        while(counter < 5)
        {
            cin >> s;
            if(s == "done")
            {
                return 0;
            }
            else if(s == "c" || s == "commands")
            {
                cout << "Available commands are: \n";
                counter--;
                //loop with function that prints available commands, todo
            }
            else
            {
                commandArray[counter] = inputConverter(s);
            }
            counter++;
        }

        commandProcessor(commandArray);
        cout << "This is where other actions would occur.\n";
        char cont;
        cin >> cont;
        counter = 0;

    }
    return 0;
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
                break;
        }

    }
    cout << "\n";
}
