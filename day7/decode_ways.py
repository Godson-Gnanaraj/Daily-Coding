def ndecode(message):
    n = len(message)
    if not n:
        return 0

    curr = 1
    ans = 0 if message[0] == "0" else 1

    for i in range(1, n):
        first = message[i - 1]
        second = message[i]

        twodigit = (first == "1" or first == "2" and second < "7")
        tmp = (curr if twodigit else 0) + (ans if second != "0" else 0)

        curr = ans
        ans = tmp

    return ans


def main():
    message = "11"
    print(ndecode(message))


if __name__ == "__main__":
    main()
