from math import sqrt, ceil

#1: Returns true if input is prime, false otherwise.
def IsPrime(n: int) -> bool:
    if n == 2:
        return True
    elif n%2 == 0 or n < 2:
        return False

    for i in range(3, ceil(sqrt(n)) + 1, 2):
        if n%i == 0:
            return False

    return True

#0: Main.
def main():
    boundary_val = 1000000
    num_list     = list(filter(lambda x: IsPrime(x), range(5000)))
    list_of_sums = []

    for i in range(len(num_list)):
        sum_of_elements = sum(num_list[:i + 1])
        if IsPrime(sum_of_elements) and sum_of_elements < boundary_val:
            list_of_sums.append(sum_of_elements)

    print("The largest prime sum of primes less than %d is %d"
            %(boundary_val, list_of_sums[-1]))
main()
