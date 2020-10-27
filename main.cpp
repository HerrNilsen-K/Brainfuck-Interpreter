#include <fstream>
#include <iostream>
#include <sstream>
#include "parser/parserEntry.h"

int main(int argc, char const **argv)
{
    //Check if one argument was passed
    try
    {
        if (argc != 2)
        {
            if (argc == 1)
            {
                throw std::string("Missing input\n");
            }
            else
            {
                throw std::string("Too many inputs\n");
            }
        }
    }
    catch (std::string e)
    {
        std::cout << e;
        return 1;
    }

    //Check if the file exist/can be opend
    std::ifstream inputFile(argv[1]);
    if (!inputFile)
    {
        std::cout << "Cannot find/open " << argv[1] << std::endl;
        return 1;
    }

    //Convert to std::ifstream to std::string
    std::stringstream converter;
    converter << inputFile.rdbuf();

    inputFile.close();

    std::string bfFile = converter.str();

    //Parse the file
    parser myParser(bfFile);

    return 0;
}
