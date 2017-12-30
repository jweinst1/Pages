#include "AppStr.h"

AppStr::AppStr() : _begin(static_cast<char*>(std::malloc(1 + (AppStr_DEF_SZ* sizeof(char))))), _mark(_begin), _end(_begin + AppStr_DEF_SZ)
{
        *_begin = '\0';
}

AppStr::~AppStr()
{
        std::free(_begin);
}

void AppStr::expand()
{
        size_t oldLen = len();
        size_t newCap = cap() * 2;
        _begin = static_cast<char*>(std::realloc(_begin, newCap));
        _end = _begin + newCap;
        _mark = _begin + oldLen;
}
