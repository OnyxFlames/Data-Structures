#include <stdio.h>
#include <stdlib.h>

void insertion_sort(long array[], int size)
{
    long value = 0;
    long index = 0;
    for (int i = 0; i < size; ++i)
    {
        value = array[i];
        index = i;
        while (index > 0 && array[index-1] > value)
        {
            array[index] = array[index - 1];
            --index;
        }
        if (index != i)
            array[index] = value;
    }

}

int main(void)
{
    long array[16] = { 16, 14, 15, 13, 11, 12, 9, 10, 6, 7, 8, 3, 5, 4, 1, 2};
    
    for (int j = 0; j < 16; ++j)
        printf("%ld ", array[j]);
    printf("\n");
    insertion_sort(array, 16);

    for (int j = 0; j < 16; ++j)
        printf("%ld ", array[j]);

    return 0;
}