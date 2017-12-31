#include <iostream>
#include "RandStrList.h"

int main(int argc, char const *argv[]) {
        RandStrList rsl;
        rsl.push("Hello sir!");
        rsl.push("yellow!");
        rsl.push("Red Clowns");
        rsl.push("ylow!");
        std::cout << rsl.get().getString() << std::endl;
        std::cout << rsl.get().getString() << std::endl;
        std::cout << rsl.get().getString() << std::endl;
        std::cout << rsl.get().getString() << std::endl;
        std::cout << rsl.get().getString() << std::endl;
        std::cout << rsl.get().getString() << std::endl;
        std::cout << rsl.get().getString() << std::endl;
        std::cout << rsl.get().getString() << std::endl;
        std::cout << rsl.get().getString() << std::endl;
        std::cout << rsl.get().getString() << std::endl;
        std::cout << rsl.get().getString() << std::endl;
        std::cout << rsl.get().getString() << std::endl;

        return 0;
}
