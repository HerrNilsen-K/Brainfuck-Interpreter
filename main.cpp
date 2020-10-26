#include <fstream>
#include <iostream>
#include <sstream>
#include "parser/parserEntry.h"

int main(int argc, char const **argv)
{
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

    std::ifstream inputFile(argv[1]);
    inputFile.open(argv[1]);
    if (!inputFile)
    {
        std::cout << "Cannot find/open the file\n";
        return 1;
    }

    std::stringstream converter;
    converter << inputFile.rdbuf();

    parser myParser(converter.str());

    return 0;
}
