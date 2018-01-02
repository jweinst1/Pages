#include <iostream>
#include "StoryEvent.h"

int main(int argc, char const *argv[]) {
        StoryEvent eve;
        eve << "Hello World!" << StoryPart::Space << "Hello world";
        std::cout << eve.getString() << "\n";


        return 0;
}
