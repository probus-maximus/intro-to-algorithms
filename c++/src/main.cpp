#include <iostream>
#include "../Headers/insertion_sort.h"

int main(void)
{
    std::cout << "Beginning algorithms:\n";

    int list[] = {5, 2, 4, 6, 1, 3};
    int len = 6;

    std::cout << "before\n";
    for(int i = 0; i < len; ++i)
    {
        std::cout << list[i] << ",";
    }
    std::cout << std::endl;

    Sort::InsertionSortInt(list, len);

    std::cout << "after\n";
    for(int i = 0; i < len; ++i)
    {
        std::cout << list[i] << ",";
    }
    std::cout << std::endl;
}