from cs50 import get_int
from cs50 import get_string


def checkSum(num):
    sum = 0
    n = num

    while n > 0:
        n = n // 10
        t = (n % 10) * 2
        while t > 0:
            sum += t % 10
            t = t // 10
        n = n // 10

    n = num
    while n > 0:
        sum += n % 10
        n = n // 100

    return sum % 10 == 0


def isAmex(a):
    return a // 10000000000000 == 34 or a // 10000000000000 == 37
    

def isVisa(a):
    return a // 1000000000000 == 4 or a // 1000000000000000 == 4
    

def isMaster(a):
    return a // 100000000000000 >= 51 and a // 100000000000000 <= 55


def main():
    number = get_int("Number: ")
    if checkSum(number) == False:
        print("INVALID")
    elif isAmex(number):
        print("AMEX")
    elif isVisa(number):
        print("VISA")
    elif isMaster(number):
        print("MASTERCARD")
    else:
        print("INVALID")


main()
