#ifndef STORY_EVENT_HEAD
#define STORY_EVENT_HEAD
//contains stream-like class that continously appends strings to make a story event.

#include <algorithm>
#include "Descriptor.h"
#define StoryEvent_DEF_SZ 100


//Allows faster insertion of standard sentence elements, like eve << StoryPart::Comma;
struct StoryPart
{
        enum Type
        {
                Space,
                Comma,
                Period
        };
};


class StoryEvent
{
private:
char* _stream;
char* _mark;
char* _end;
public:

StoryEvent();
~StoryEvent();

long getLen(void) const
{
        return _mark - _stream;
}

long getCapacity(void) const
{
        return _end - _stream;
}

long getSpace(void) const
{
        return _end - _mark;
}

const char* getString(void) const
{
        return _stream;
}

StoryEvent& operator <<(const char* words);

StoryEvent& operator <<(StoryPart::Type flag);

//inserts output of descriptor object into story event.
StoryEvent& operator <<(const Descriptor& desc);
private:
void expandBy(long addSize);
};

#endif
