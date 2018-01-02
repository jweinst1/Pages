#ifndef RANDOM_INTS_HEAD
#define RANDOM_INTS_HEAD

//template class for multiple sizes of arrays of random integers

#include <cstdlib>

template<int amount, int max> class RandomInts
{
public:
int nums[amount];
RandomInts()
{
        for (int i = 0; i < amount; i++)
        {
                nums[i] = std::rand() % max;
        }
}

};

#endif
