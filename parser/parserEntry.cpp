#include "parserEntry.h"
#include "../base/bfChars.h"

#include <iostream>
#include <string>

parser::parser(std::string &bfFile)
{
    std::string temp = bfFile;
    bfFile.clear();
    for (unsigned char i : temp)
    {
        if ((i == brainfuck::core::BF_SYMBOLS::PLUS ||
              i == brainfuck::core::BF_SYMBOLS::MINUS ||
              i == brainfuck::core::BF_SYMBOLS::BIGGER ||
              i == brainfuck::core::BF_SYMBOLS::SMALLER ||
              i == brainfuck::core::BF_SYMBOLS::O_BRACKET ||
              i == brainfuck::core::BF_SYMBOLS::C_BRACKET ||
              i == brainfuck::core::BF_SYMBOLS::DOT ||
              i == brainfuck::core::BF_SYMBOLS::COMMA))
        {
            bfFile += i;
            std::cout << bfFile[i] << ' ' << i <<std::endl;
        }
    }
}
