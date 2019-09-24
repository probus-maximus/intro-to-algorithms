#include <iostream>
#include "../Headers/insertion_sort.h"

void PrintIntList(int* list, int len, char symbol=',')
{
	for(int i =0; i < len; ++i)
	{
		std::cout << list[i] << symbol;
	}
	std::cout << std::endl;
}

int main(void)
{
    std::cout << "Beginning algorithms:\n";

    int list[] = {5, 2, 4, 6, 1, 3};
    int len = 6;

    std::cout << "before\n";
    PrintIntList(list, len);

    Sort::InsertionSortInt(list, len);

    std::cout << "after\n";
	PrintIntList(list, len);

	int list2[] = {31, 41, 59, 26, 41, 58};
	len = 6;

	std::cout << "before\n";
	PrintIntList(list2, len);

	Sort::InsertionSortInt(list2, len, false);
	
	std::cout << "After\n";
	PrintIntList(list2, len);
}