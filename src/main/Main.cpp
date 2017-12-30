#include <iostream>
#include "BlockStr.h"

int main(int argc, char const *argv[]) {
        BlockStr block("");
        BlockStr block2("");
        std::cout << (block == block2) << "\n";
        return 0;
}
