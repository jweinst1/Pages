#include "BlockStr.h"

long BlockStr::getLen(const char* string)
{
        long total = 0;
        while(*string++) total++;
        return total;
}

BlockStr::BlockStr(const char* string) : _str(new char[BlockStr::getLen(string) + 1])
{
        char* writer = _str;
        while((*writer++ = *string++)) ;
}

BlockStr::~BlockStr()
{
        delete[] _str;
}
