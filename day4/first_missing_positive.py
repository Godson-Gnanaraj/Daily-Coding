def first_missing_positive(arr):
    n = len(arr)
    if 1 not in arr:
        return 1

    # Changing elements greater than n and lesser than 1 to 1
    for i in range(n):
        if arr[i] < 1 or arr[i] > n:
            arr[i] = 1

    # mark the index of numbers present
    for i in range(n):
        val = abs(arr[i])
        if 1 <= val <= n and arr[val - 1] > 0:
            arr[val - 1] *= -1

    # return the index of first found positive number
    for i in range(n):
        if arr[i] >= 1:
            return i + 1

    # return arr_length + 1 if no positive number found
    return n + 1


def main():
    arr1 = [3, 4, -1, 1]
    assert first_missing_positive(arr1) == 2

    arr2 = [1, 2, 0]
    assert first_missing_positive(arr2) == 3


if __name__ == "__main__":
    main()
