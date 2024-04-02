# factorial of a number
def fact(num):
    if num == 0:
        return 1
    else:
        return num * fact(num - 1)

# even number checker
def isEven(num):
    if num % 2 == 0:
        return True
    else:
        return False

# odd number checker
def isOdd(num):
    if num % 2 != 0:
        return True
    else:
        return False


# prime number checker
def isPrime(num):
    if num == 1 | num == 0:
        return False
    elif num == 2:
        return True
    else:
        for i in range(2, num):
            if (num % i) == 0:
                return False
        return True


# palindrome number checker
def isPalin(num):
    if num == int(str(num)[::-1]):
        return True
    else:
        return False


# armstrong number checker
def isArms(num):
    sum = n = 0
    temp = num
    while temp > 0:
        temp //= 10
        n += 1
    temp = num
    while temp > 0:
        digit = temp % 10
        sum += digit**n
        temp //= 10
    if num == sum:
        return True
    else:
        return False


# perfect number checker
def isPerfect(num):
    sum = 0
    for i in range(1, num):
        if (num % i) == 0:
            sum += i
    if sum == num:
        return True
    else:
        return False


# krishnamurthy number checker
def isKris(num):
    sum = 0
    temp = num
    while temp > 0:
        digit = temp % 10
        sum += fact(digit)
        temp //= 10
    if num == sum:
        return True
    else:
        return False
