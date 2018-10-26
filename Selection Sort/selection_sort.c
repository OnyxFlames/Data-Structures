#include <stdio.h>

void swap(long* a, long* b)
{
    long temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(long array[], int size)
{
    long min = 0;
    for (int i = 0; i < size - 1; ++i)
    {
        min = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (array[j] < array[min])
            min = j;
        }

        if (min != i)
            swap(&array[min], &array[i]);
    }
}

int main(void)
{
    long array[] = {5, 7, 3, 4, 2, 1}

    selection_sort(array, 6);

    for (int i = 0; i < 6; ++i)
        printf("%d ", array[i]);

    return 0;
}