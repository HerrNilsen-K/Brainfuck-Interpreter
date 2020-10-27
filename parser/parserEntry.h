#ifndef __PARSERENTRY_H__
#define __PARSERENTRY_H__

#include <string>
#include <sstream>
#include <fstream>

class parser
{
private:
    std::string m_fileContainer;
public:
    parser() = delete;
    parser(std::string &bfSourceFile);
};

#endif // __PARSERENTRY_H__