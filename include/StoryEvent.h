#ifndef STORY_EVENT_HEAD
#define STORY_ELEMS_HEAD
//contains stream-like class that continously appends strings to make a story event.

#define StoryEvent_DEF_SZ 100


class StoryEvent
{
private:
char* _stream;
char* _mark;
char* _end;
public:
StoryEvent();
~StoryEvent();
private:
void expandBy(long addSize);
};

#endif
