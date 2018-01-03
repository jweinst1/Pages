#include "StoryEvent.h"

StoryEvent::StoryEvent() : _stream(new char[StoryEvent_DEF_SZ + 1]), _mark(_stream), _end(_stream + StoryEvent_DEF_SZ)
{
        std::fill(_stream, _stream + StoryEvent_DEF_SZ, 0);
}

StoryEvent::~StoryEvent()
{
        delete[] _stream;
}

StoryEvent& StoryEvent::operator<<(const char* words)
{
        long wordSize = 0;
        const char* count = words;
        while(*count++) wordSize++;
        if(wordSize >= getSpace()) expandBy(wordSize * 2);
        while(*words) *_mark++ = *words++;
        return *this;
}

StoryEvent& StoryEvent::operator<<(StoryPart::Type flag)
{
        if(3 >= getSpace()) expandBy(getLen() * 2);
        switch(flag)
        {
        case StoryPart::Comma:
                *_mark++ = ',';
                *_mark++ = ' ';
                break;
        case StoryPart::Period:
                *_mark++ = '.';
                *_mark++ = ' ';
                break;
        case StoryPart::Space:
                *_mark++ = ' ';
                break;
        }
        return *this;
}

//inserts output of descriptor object into story event.
StoryEvent& StoryEvent::operator<<(const Descriptor& desc)
{
        DescriptorPath::Type path = DescriptorPath::get();
        switch(path)
        {
        case DescriptorPath::Zero:
                break;
        case DescriptorPath::One:
                *this << StoryPart::Space << desc.get().getString();
                break;
        case DescriptorPath::Two:
                *this << StoryPart::Space
                      << desc.get().getString()
                      << StoryPart::Comma
                      << desc.get().getString();
                break;
        case DescriptorPath::Two_And:
                *this << StoryPart::Space
                      << desc.get().getString()
                      << " and "
                      << desc.get().getString();
                break;
        }
        return *this;
}

StoryEvent& StoryEvent::operator<<(const StoryObject& sobj)
{

        return *this;
}

void StoryEvent::expandBy(long addSize)
{
        long newCap = getCapacity() + addSize;
        long oldLen = getLen();
        char* newStream = new char[newCap + 1];
        std::fill(newStream, newStream + newCap, 0);
        char* writer = newStream;
        char* reader = _stream;
        while(reader != _mark)
        {
                *writer++ = *reader++;
        }
        delete[] _stream;
        _stream = newStream;
        _mark = _stream + oldLen;
        _end = _stream + newCap;
}
