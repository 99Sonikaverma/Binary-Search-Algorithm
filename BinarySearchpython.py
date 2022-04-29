# Binary Search in python


def BS(arr, z, last, first):

    if first >= last:

        middle = last + (first - last)//2

        # If found at middle, then return it
        if arr[middle] == z:
            return middle

        # Search the left half
        elif arr[middle] > z:
            return BS(arr, z, last, middle-1)

        # Search the right half
        else:
            return BS(arr, z, middle + 1, first)

    else:
        return -1


arr = [3, 4, 5, 6, 7, 8, 9]
z = 0

result = BS(arr, z, 0, len(arr)-1)

if result != -1:
    print("Element is present at index " + str(result))
else:
    print("Not found")