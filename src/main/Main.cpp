#include <iostream>
#include "BlockStr.h"

int main(int argc, char const *argv[]) {
        BlockStr block("fff");
        BlockStr block2 = block;
        std::cout << (block !=  block2) << "\n";
        std::cout << block2.getString() << "\n";
        return 0;
}
