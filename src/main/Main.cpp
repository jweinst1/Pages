#include <iostream>
#include "StoryObject.h"
#include "StoryAction.h"
#include "StoryEvent.h"

int main(int argc, char const *argv[]) {
        StoryObject des("apple");
        des.pushDeterminer("the");
        des.pushDeterminer("one");
        des.pushDescriptor("red");
        des.pushDescriptor("yellow");
        des.pushDescriptor("blue");
        des.pushDescriptor("green");

        StoryAction actor("shines");
        actor.pushAdverb("brightly");
        actor.pushAdverb("sharply");
        StoryEvent eve;
        eve << des;
        eve << actor;
        std::cout << des.getName().getString() << std::endl;
        std::cout << eve.getString() << std::endl;
        return 0;

}
