def binary_search(arr, value):
    lower = 0
    upper = len(arr) - 1
    mid = -1
    index = -1

    while lower <= upper:
        mid = lower + (upper - lower) // 2
        if arr[mid] == value:
            index = mid
            break
        elif arr[mid] < value:
            lower = mid + 1
        elif arr[mid] > value:
            upper = mid - 1
    return index

l = [1, 2, 4, 6, 8, 9, 12, 13]

if binary_search(l, 9) > -1:
    print("Found value")
else:
    print("Failed to find value")