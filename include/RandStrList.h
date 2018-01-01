#ifndef RAND_STR_LIST_HEAD
#define RAND_STR_LIST_HEAD

#include <vector>
#include <cstdlib>
#include "BlockStr.h"

class RandStrList
{
private:
std::vector<BlockStr> _lst;
long _len;
public:
RandStrList() : _len(0) {
}
~RandStrList(){
}

void push(const char* string)
{
        BlockStr pushstr(string);
        _lst.push_back(pushstr);
        _len++;
}

const BlockStr& get(void) const
{
        return _lst[std::rand() % _len];
}

long getLen(void) const
{
        return _len;
}

bool isEmpty(void) const
{
        return _len == 0;
}
};

#endif
