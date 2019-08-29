#include "../Headers/insertion_sort.h"

int* Sort::InsertionSortInt(int* A, int len)
{
    for(int j = 1; j < len; ++j)
    {
        int key = A[j];
        int i = j - 1;

        while(i > -1 && A[i] > key)
        {
            A[i + 1] = A[i];
            --i;
        }
        A[i + 1] = key;
    }
    return A;
}