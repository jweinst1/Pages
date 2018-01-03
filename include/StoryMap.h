#ifndef STORY_MAP_HEAD
#define STORY_MAP_HEAD
// Header for mapping objects to actions

#include <map>
#include "BlockStr.h"
#include "StoryObject.h"
#include "StoryAction.h"

class StoryMap
{
private:
std::map<BlockStr, StoryObject> _objects;
std::map<BlockStr, StoryAction> _actions;
public:
StoryMap()
{
}
~StoryMap()
{
}

void putAction(const BlockStr& name, const StoryAction& action)
{
        _actions[name] = action;
}
};

#endif
