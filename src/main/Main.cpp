#include <iostream>
#include "StoryElems.h"
#include "Descriptor.h"
#include "RandomInts.h"

int main(int argc, char const *argv[]) {
        RandomInts<3, 30> numbers;
        std::cout << numbers.nums[0] << std::endl;
        std::cout << numbers.nums[1] << std::endl;
        std::cout << numbers.nums[2] << std::endl;
        std::cout << numbers.nums[2] << std::endl;
        std::cout << DescriptorPath::get() << std::endl;
        return 0;
}
