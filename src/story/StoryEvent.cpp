#include "StoryEvent.h"

StoryEvent::StoryEvent() : _stream(new char[StoryEvent_DEF_SZ]), _mark(_stream), _end(_stream + StoryEvent_DEF_SZ)
{

}

StoryEvent::~StoryEvent()
{
        delete[] _stream;
}
