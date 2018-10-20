#include <stdio.h>

void bubble_sort(int arr[], int size)
{
    int swap_counter = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            ++swap_counter;
        }
    }   
    if (swap_counter > 0)
        bubble_sort(arr, size); 
}

int main(void)
{   
    int array[] = 
    {
        1, 7, 4, 5, 3, 
        7, 5, 2, 4, 2,
    };
    bubble_sort(array, 10);
    for (int i = 0; i < 10; ++i)
        printf("%d, ", array[i]);
    return 0;
}