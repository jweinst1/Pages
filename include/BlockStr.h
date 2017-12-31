#ifndef BLOCK_STR_HEAD
#define BLOCK_STR_HEAD

// String that acts as non-modfiable, block of characters for comparing or embedding

class BlockStr
{
private:

char* _str;
public:
BlockStr(const char* string);
~BlockStr();

const char* getString() const
{
        return _str;
}

bool operator ==(const BlockStr& other) const;
bool operator !=(const BlockStr& other) const
{
        return !(*this == other);
}
static long getLen(const char* string);

};

#endif