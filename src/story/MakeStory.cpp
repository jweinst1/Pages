#include "MakeStory.h"

// first possible story config
void MakeStory::one(void)
{
        StoryEvent event;
        StoryMap smap;

        StoryObject obj1("ball");
        obj1.pushDeterminer("the");
        obj1.pushDeterminer("a");

        obj1.pushDescriptor("red");
        obj1.pushDescriptor("blue");
        obj1.pushDescriptor("pink");
        obj1.pushDescriptor("orange");
        obj1.pushDescriptor("fluffy");
        obj1.pushDescriptor("purple");
        obj1.pushDescriptor("round");

        obj1.pushAction("bounces toward");
        obj1.pushAction("bounces");
        obj1.pushAction("rolls toward");

        smap.putObject("ball", obj1);

        StoryAction act1("bounces toward");
        act1.pushAdverb("quickly");
        act1.pushAdverb("slowly");
        act1.pushAdverb("cautiously");
        act1.pushObject("school");
        smap.putAction("bounces toward", act1);

        StoryObject obj2("school");
        obj2.pushDeterminer("a");

        obj2.pushDescriptor("large");
        obj2.pushDescriptor("huge");
        obj2.pushDescriptor("presitgious");

        smap.putObject("school", obj2);



}
