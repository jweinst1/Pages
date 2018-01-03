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

void putObject(const BlockStr& name, const StoryObject& obj)
{
        _objects[name] = obj;
}

StoryAction& getAction(const BlockStr& name)
{
        return _actions[name];
}

StoryObject& getObject(const BlockStr& name)
{
        return _objects[name];
}

bool hasAction(const BlockStr& name)
{
        return _actions.find(name) != _actions.end();
}

bool hasObject(const BlockStr& name)
{
        return _objects.find(name) != _objects.end();
}

};

#endif
