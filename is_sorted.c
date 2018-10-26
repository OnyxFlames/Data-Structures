#include <stdio.h>
#include <stdbool.h>

int is_sorted(long array[], int size)
{
    int i = -1;
    while (i < size - 1)
    {
        i++;
        if (array[i] < array[i + 1])
            continue;
        else
            return false;
    }
    return true;
}

int main(void)
{
    long array[5] = {1, 3, 5, 7, 9};

    if (is_sorted(array, 5) == true)
        printf("Array sorted.\n");
    else
        printf("Array not sorted.\n");

    return 0;
}