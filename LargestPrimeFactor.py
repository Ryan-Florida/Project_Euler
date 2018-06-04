from math import *

def main():
    largest = 0

    for i in range(10000, int(600851475143/5)):
        if 600851475143%i == 0:
            if IsPrime(i):
                largest = i

    print(largest)

def IsPrime(n):
    if n == 1:
        return False
    for i in range(1, n):
        if n%i == 0:
            return False

    return True

main()



