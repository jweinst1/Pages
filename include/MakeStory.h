#ifndef MAKE_STORY_HEAD
#define MAKE_STORY_HEAD
// contains procedures for sample stories

#include <iostream>
#include "StoryMap.h"
#include "StoryEvent.h"

//used to determine type of story being produced
struct MakeStoryPath
{
        enum Type
        {
                one
        };
};

class MakeStory
{
public:
static void one(void);
};

#endif // MAKE_STORY_HEAD
