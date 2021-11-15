from cs50 import get_int


def main():
    x = get_right_int()


def get_right_int():
    while True:
        number = get_int("Print the number from 1 to 8: ")
        if number > 8 or number < 1:
            print("number is wrong")
        else:
            break

    for i in range(number):
        for j in range(number):
            if number - i - 1 > j:
                print(" ", end="")
            else:
                print("#", end="")
        print("  ", end="")
        for j in range(number):
            if j <= i:
                print("#", end="")
        print()


main()
