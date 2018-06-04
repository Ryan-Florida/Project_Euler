#1: Return list of digits.
def Get_Digits(n: int) -> list:
    n_str = str(n)
    return [int(n_i) for n_i in n_str]

#2: Return sum of factorials of the digits in the input list.
def Sum_of_Digits_Factorials(digits: list) -> int:
    digits = [Factorial(n_i) for n_i in digits]
    return sum(digits)

#2.1: Return factorial of input.
def Factorial(n: int) -> int:
    if n == 0 or n == 1:
        return 1
    elif n == 2:
        return 2
    return Factorial(n - 1)*n

#0: Main
def main():
    sum_of_factorions = 0

    for i in range(3, 100000):
        digits = Get_Digits(i)
        result = Sum_of_Digits_Factorials(digits)
        if i == result:
            sum_of_factorions += i

    print(sum_of_factorions)

# Call main.
main()
