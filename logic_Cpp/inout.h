//this is the .h file for the I/O

#pragma once
#include "stdio.h"
#include "stdlib.h"
#include <iostream>
#include <string>

namespace O
{
    class genIO
    {
    public:
        bool commandProcessor(char *arr);
        char inputConverter(std::string command);
        void listCommands();
    };
}
