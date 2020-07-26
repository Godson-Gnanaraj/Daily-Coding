def cons(a, b):

    def pair(f):
        return f(a, b)

    return pair


def car(pair):

    def left(a, _):
        return a

    return pair(left)


def cdr(pair):

    def right(_, b):
        return b

    return pair(right)


def main():
    assert car(cons(3, 4)) == 3
    assert cdr(cons(3, 4)) == 4


if __name__ == "__main__":
    main()
