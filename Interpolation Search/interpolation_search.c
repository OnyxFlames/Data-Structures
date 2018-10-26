#include <stdio.h>

int interpolation_search(long array[], int size, long value)
{
    int lower_bound = 0;
    int upper_bound = size - 1;
    int mid_point = -1;

    while (lower_bound <= upper_bound)
    {
        if (lower_bound == upper_bound || array[lower_bound] == array[upper_bound])
            return -1;

        mid_point = lower_bound + ((upper_bound - lower_bound) / (array[upper_bound] - array[lower_bound])) * (value - array[lower_bound]);

        if (array[mid_point] == value)
            return mid_point;
        else if (array[mid_point] < value)
            lower_bound = mid_point + 1;
        else if (array[mid_point] > value)
            upper_bound = mid_point - 1;
    }
    return -1;
}

int main(void)
{
    long array[] = {1L, 2L, 3L, 4L, 5L};
    if (interpolation_search(array, 5, 4) > -1)
        printf("Found value.\n");
    else
        printf("Failed to find value");

    return 0;
}