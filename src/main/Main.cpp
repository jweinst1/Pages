#include <iostream>
#include "StoryObject.h"
#include "StoryEvent.h"

int main(int argc, char const *argv[]) {
        BlockStr bsss("   Hello!");
        StoryObject des("apple");
        des.pushDescriptor("red");
        des.pushDescriptor("yellow");
        des.pushDescriptor("blue");
        des.pushDescriptor("green");
        StoryEvent eve;
        eve << des.getDescriptor();
        eve << bsss;
        std::cout << eve.getString() << std::endl;
        return 0;

}
