from cs50 import get_float


def main():
    x = get_right_float()


def get_right_float():
    while True:
        change = get_float("Change owed: ")
        if change < 0:
            print("number is wrong")
        else:
            break

    cents = round(change * 100)
    count = 0

    while cents > 24:
        cents = cents - 25
        count = count + 1
    while cents > 9:
        cents = cents - 10
        count = count + 1
    while cents > 4:
        cents = cents - 5
        count = count + 1
    count = cents + count

    print("Change: ", + count)


main()
