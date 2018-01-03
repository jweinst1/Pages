#ifndef STORY_ACTION_HEAD
#define STORY_ACTION_HEAD

#include "BlockStr.h"
#include "RandStrList.h"

class StoryAction
{
private:
BlockStr _name;
StoryAction(const char* name);
~StoryAction(){
}
};

#endif
