#include <iostream>
#include "StoryObject.h"
#include "StoryEvent.h"

int main(int argc, char const *argv[]) {
        StoryObject des("apple");
        des.pushDeterminer("the");
        des.pushDeterminer("one");
        des.pushDescriptor("red");
        des.pushDescriptor("yellow");
        des.pushDescriptor("blue");
        des.pushDescriptor("green");
        StoryEvent eve;
        eve << des;
        std::cout << des.getName().getString() << std::endl;
        std::cout << eve.getString() << std::endl;
        return 0;

}
