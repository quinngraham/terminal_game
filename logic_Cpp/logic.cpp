#include "stdio.h"
#include "stdlib.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//declarations for methods
void commandProcessor(char *arr);
void inputConverter(string arr[], char *commandArray);



//declarations for random globals i think i might need
bool gameRunning;
char commandArray[] = {' ', ' ', ' ', ' ', ' '};

int main(int argc, char const *argv[]) {
    gameRunning = true;
    bool waiting = false;
    string s;
    string commandArr[6];
    bool keepLooping = true;
    int counter = 0;

    cout << "Thank you for playing the game! Please do not use uppercase letters, " <<
    "as you will not get a correct command response. Use 'c' or 'command' to get " <<
    "available commands.\n";

    while(gameRunning)
    {
        while(keepLooping && counter < 5)
        {
            counter++;
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
                commandArr[counter] = s;
                //cout << s << "\n";
            }
        }

        inputConverter(commandArr, commandArray);
        commandProcessor(commandArray);
        waiting = true;
        while(waiting)
        {
            char c;
            cout << "Presss any key to continue.\n";
            cin >> c;
            waiting = false;
            counter = 0;
        }

    }
    return 0;
}


//this takes the input and converts it to usable characters
//there is room for improvement here
void inputConverter(string arr[], char retVal[])
{
    for(int i = 1; i < 5; i++)
    {
        if(arr[i] == "right" || arr[i] == "rihgt")
        {
            retVal[i] = 'r';
        }
        else if(arr[i] == "left")
        {
            retVal[i] = 'l';
        }
        else if(arr[i] == "middle" || arr[i] == "mid" || arr[i] == "midle")
        {
            retVal[i] = 'm';
        }

    }

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
