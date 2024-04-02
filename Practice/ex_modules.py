import sys
sys.path.append(r"C:\Users\user\OneDrive - RICE Group\Debug\Python Source File\Modules")

import numcheck

def main():
    num = int(input("Number: "))

    if numcheck.isPrime(num):
        print("Prime number")
    else:
        print("Not a prime number")

    if numcheck.isEven(num):
        print("Even number")
    else:
        print("Odd number")

    if numcheck.isPalin(num):
        print("Palindrome number")
    else:
        print("Not a palindrome number")

    if numcheck.isArms(num):
        print("Armstrong number")
    else:
        print("Not an Armstrong number")

    print("Factorial of {} is {}".format(num, numcheck.fact(num)))
    # Another way to use f-strings (By GitHub Copilot)

    if numcheck.isKris(num):
        print("Krishnamurthy number")
    else:
        print("Not a Krishnamurthy number")

if __name__ == "__main__":
    main()

# The above code is the same as the below code, but the below code is more efficient
# num = int(input("Number: "))
# print("Factorial of {} is {}".format(num, numcheck.fact(num)))
# print("Prime number" if numcheck.isPrime(num) else "Not a prime number")
# print("Even number" if numcheck.isEven(num) else "Odd number")
# print("Palindrome number" if numcheck.isPalin(num) else "Not a palindrome number")
# print("Armstrong number" if numcheck.isArms(num) else "Not an Armstrong number")
# print("Krishnamurthy number" if numcheck.isKris(num) else "Not a Krishnamurthy number")
