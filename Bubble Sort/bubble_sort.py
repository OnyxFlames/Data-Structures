def bubble_sort(arr):
    swap_counter = 0
    for i in range(0, len(arr) - 1):
        if arr[i] > arr[i + 1]:
            temp = arr[i]
            arr[i] = arr[i + 1]
            arr[i + 1] = temp
            swap_counter += 1
    if swap_counter > 0:
        bubble_sort(arr)

l = [9, 7, 5, 3, 1, 10, 8, 6, 4, 2,]

bubble_sort(l)
for i in range(0, len(l)):
    print(l[i])