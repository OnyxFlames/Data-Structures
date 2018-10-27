def selection_sort(arr):
    min = 0
    for i in range(0, len(arr)):
        min = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[min]:
                min = j
        if min != i:
            temp = arr[min]
            arr[min] = arr[i]
            arr[i] = temp
l = [3, 2, 1, 6, 5, 4, 10, 9, 8, 2, 6,]

selection_sort(l)
for i in range(0, len(l)):
    print(l[i])