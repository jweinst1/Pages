#ifndef STORY_ACTION_HEAD
#define STORY_ACTION_HEAD

#include "BlockStr.h"
#include "RandStrList.h"

#define StoryAction_PATHS 2

// used to determine structure of generated action.
struct ActionPath
{
        enum Type
        {
                Adverb,
                None
        };
        static Type get(void)
        {
                return static_cast<Type>(std::rand() % StoryAction_PATHS);
        }
};

// Story action class.
class StoryAction
{
private:
BlockStr _name;
RandStrList _objects;
RandStrList _adverbs;

public:
StoryAction(const char* name);
~StoryAction(){
}

const BlockStr& getName(void) const
{
        return _name;
}

bool hasObjects(void) const
{
        return !(_objects.isEmpty());
}

void pushObject(const char* string)
{
        _objects.push(string);
}

const BlockStr& getObject(void) const
{
        return _objects.get();
}

bool hasAdverbs(void) const
{
        return !(_adverbs.isEmpty());
}

void pushAdverb(const char* string)
{
        _adverbs.push(string);
}

const BlockStr& getAdverb(void) const
{
        return _adverbs.get();
}

};

#endif
