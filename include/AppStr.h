#ifndef APPSTR_HEAD
#define APPSTR_HEAD

#include <cstdlib>

#define AppStr_DEF_SZ 15

// String thats specialized for appending characters
class AppStr
{
private:
char* _begin;
char* _mark;
char* _end;
public:
AppStr();

~AppStr();

size_t len() const
{
        return _mark - _begin;
}

size_t cap() const
{
        return _end - _begin;
}

size_t space() const
{
        return _mark - _begin;
}

bool isFull() const
{
        return _mark == _end;
}

const char* string() const
{
        return _begin;
}

AppStr& operator << (char ch)
{
        if(isFull()) expand();
        *_mark++ = ch;
        *_mark = '\0';
        return *this;
}
private:
void expand();
};

#endif
