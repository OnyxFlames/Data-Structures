#include <stdio.h>
#include <stdbool.h>

int binary_search(long array[], int size, long value)
{
    int lower_bound = 0;
    int upper_bound = size - 1;
    int mid_point = -1;
    int index = -1;

    while (lower_bound <= upper_bound)
    {
        mid_point = lower_bound + (upper_bound - lower_bound) / 2;

        if (array[mid_point] == value)
        {
            index = mid_point;
            break;
        }
        else if (array[mid_point] < value)
            lower_bound = mid_point + 1;
        else if (array[mid_point] > value)
            upper_bound = mid_point - 1;

    }
    return index;
}


int main(void)
{
    long array[] = 
    {
       1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    };


    int ret = binary_search(array, 10, 6);

    if (ret != -1)
        printf("Found value at index %d\n", ret);
    else
        printf("Failed to find value '%ld'\n", 6);

    return 0;
}
