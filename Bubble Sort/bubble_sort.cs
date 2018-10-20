class Program
{
    public void Bubble_Sort(long[] array)
    {
        long swap_counter = 0;
        for (int i = 0; i < array.Length - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                long temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                ++swap_counter;
            }
        }
        if (swap_counter > 0)
            Bubble_Sort(array);
    }
}