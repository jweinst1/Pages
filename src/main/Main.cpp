#include <iostream>
#include "AppStr.h"

int main(int argc, char const *argv[]) {
        AppStr aps;
        aps += 'b';
        aps += 'c';
        std::cout << aps.string();
        return 0;
}
