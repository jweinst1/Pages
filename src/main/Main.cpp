#include <iostream>
#include "StoryEvent.h"
#include "RandomInts.h"

int main(int argc, char const *argv[]) {
        StoryEvent eve;
        eve << "Hello World!" << StoryPart::Space << "Hello world";
        std::cout << eve.getString() << "\n";
        RandomInts<3, 30> numbers;
        std::cout << numbers.nums[0] << std::endl;
        std::cout << numbers.nums[1] << std::endl;
        std::cout << numbers.nums[2] << std::endl;

        return 0;
}
