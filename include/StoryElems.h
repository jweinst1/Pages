#ifndef STORY_ELEMS_HEAD
#define STORY_ELEMS_HEAD
// header to handle object class for stories

#include "BlockStr.h"
#include "RandStrList.h"


enum StoryType
{
        StoryType_Object,
        StoryType_Action
};

// Base class which story elements inherit from
class Element
{
private:
BlockStr _name;
StoryType _type;
public:
void setType(StoryType type)
{
        _type = type;
}

StoryType getType(void) const
{
        return _type;
}

void setName(const BlockStr& name)
{
        _name = name;
}

const BlockStr& getName(void) const
{
        return _name;
}
};

class StoryObject
{
private:
RandStrList _dets;
RandStrList _desc;
public:
StoryObject()
{
}
~StoryObject()
{
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
