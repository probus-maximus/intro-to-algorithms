#include "../Headers/insertion_sort.h"

int* Sort::InsertionSortInt(int* A, int len, bool inc)
{
    for(int j = 1; j < len; ++j)
    {
        int key = A[j];
        int i = j - 1;

		if(inc)
		{
			while(i > -1 && A[i] > key)
			{
				A[i + 1] = A[i];
				--i;
			}
		}
		else
		{
			while(i > -1 && A[i] < key)
			{
				A[i + 1] = A[i];
				--i;
			}
		}
		
		A[i + 1] = key;
    }
    return A;
}