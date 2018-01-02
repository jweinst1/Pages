#ifndef STORY_OBJECT_HEAD
#define STORY_OBJECT_HEAD

#include "BlockStr.h"
#include "RandStrList.h"

class StoryObject
{
private:
RandStrList _dets;
RandStrList _desc;
BlockStr _name;
public:
StoryObject(const char* name);
~StoryObject()
{
}

void pushDescriptor(const char* string)
{
        _desc.push(string);
}

void pushDeterminer(const char* string)
{
        _dets.push(string);
}

bool hasDeterminers(void) const
{
        return _dets.isEmpty();
}

bool hasDescriptors(void) const
{
        return _desc.isEmpty();
}

};

#endif
