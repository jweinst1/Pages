#ifndef DESCRIPTOR_HEAD
#define DESCRIPTOR_HEAD
// header that contains Descriptor class for forming description statements (adjectives)

#include "RandStrList.h"

#define Descriptor_PATHS 4

//struct-enum for randomly choosing type of description made.
struct DescriptorPath
{
        enum Type
        {
                Zero,
                One,
                Two,
                Two_And
        };
        static Type get(void)
        {
                return static_cast<Type>(std::rand() % Descriptor_PATHS);
        }
};

class Descriptor
{
private:
RandStrList _words;
public:
Descriptor()
{
}
~Descriptor()
{
}
void push(const BlockStr& string)
{
        _words.push(string);
}

long getLen(void) const
{
        return _words.getLen();
}

};

#endif
