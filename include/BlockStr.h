#ifndef BLOCK_STR_HEAD
#define BLOCK_STR_HEAD

// String that acts as non-modfiable, block of characters for comparing or embedding

class BlockStr
{
private:

char* _str;
public:
// default option is empty string
BlockStr(const char* string = "");
BlockStr(const BlockStr& other);
~BlockStr();

const char* getString(void) const
{
        return _str;
}

BlockStr& operator=(const BlockStr& other);

bool operator ==(const BlockStr& other) const;
bool operator !=(const BlockStr& other) const
{
        return !(*this == other);
}

friend bool operator <(const BlockStr& lhs, const BlockStr& rhs);
static long getLen(const char* string);

};

#endif
