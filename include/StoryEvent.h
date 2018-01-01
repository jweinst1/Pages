#ifndef STORY_EVENT_HEAD
#define STORY_ELEMS_HEAD
//contains stream-like class that continously appends strings to make a story event.


class StoryEventNode
{
private:
char* _str;
public:
StoryEventNode* next;
StoryEventNode(const char* string);
~StoryEventNode();
}


class StoryEvent
{
};

#endif
