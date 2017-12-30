#include <iostream>
#include "AppStr.h"
#include "BlockStr.h"

int main(int argc, char const *argv[]) {
        AppStr aps;
        aps << 'b' << 'v';
        aps << 'c' << '\n';
        std::cout << aps.string();
        BlockStr block("FooBar\n");
        std::cout << block.getString();
        return 0;
}
