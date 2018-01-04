#include <cstdlib>
#include "MakeStory.h"

int main(int argc, char const *argv[]) {
        if(argc == 2)
        {
                long eventCount = std::strtol(argv[1],nullptr,10);
                for(long i = 0; i<eventCount; i++) MakeStory::one();
        }
        else std::cout<< "Error: Need argument for eventcount.\n";
        return 0;

}
