#include <iostream>
#include "StoryEvent.h"

int main(int argc, char const *argv[]) {
        Descriptor des;
        des.push("red");
        des.push("yellow");
        des.push("blue");
        des.push("green");
        StoryEvent eve;
        eve << des;
        std::cout << eve.getString() << std::endl;
        return 0;
}
