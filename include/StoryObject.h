#ifndef STORY_OBJECT_HEAD
#define STORY_OBJECT_HEAD

#include "BlockStr.h"
#include "RandStrList.h"
#include "Descriptor.h"

class StoryObject
{
private:
RandStrList _dets;
Descriptor _desc;
RandStrList _actions;
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

void pushAction(const char* string)
{
        _actions.push(string);
}

bool hasDeterminers(void) const
{
        return _dets.isEmpty();
}

bool hasDescriptors(void) const
{
        return _desc.isEmpty();
}

bool hasActions(void) const
{
        return _actions.isEmpty();
}

const BlockStr& getName(void) const
{
        return _name;
}

const Descriptor& getDescriptor(void) const
{
        return _desc;
}

};

#endif
