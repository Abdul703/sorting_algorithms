def insertion_sort(arr, n):
    for i in range(n-1):
        if arr[i] > arr[i + 1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]
            print(arr)

            for j in range(i, 0, -1):
                if arr[j] < arr[j-1]:
                    arr[j], arr[j-1] = arr[j-1], arr[j]
                    print(arr)
                else:
                    break
    return arr

array = [19, 48, 99, 71, 13, 52, 96, 73, 86, 7]
print(insertion_sort(array, len(array)))