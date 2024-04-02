print("Press 1 for Factorial")
print("Press 2 for Prime")
print("Press 3 for Odd or Even")

choice = int(input("Your choice(1/2/3): "))

if choice == 1:
    print("Current Choice: Factorial")
    num = int(input("Number: "))
    result = 1
    for i in range(1, num + 1):
        result *= i
    print(f"Factorial of {num} is {result}")

elif choice == 2:
    print("Current choice: Prime")
    num = int(input("Number: "))
    flag = True
    if num <= 1:
        print(f"{num} is neither prime nor composite")
    else:
        for i in range(2, int(num / 2) + 1):
            if num % i == 0:
                flag = False
                break
        if flag:
            print(f"{num} is a Prime Number")
        else:
            print(f"{num} is a Composite Number")

elif choice == 3:
    print("Current choice: Odd or Even")
    num = int(input("Number: "))
    if num % 2 == 0:
        print(f"{num} is Even")
    else:
        print(f"{num} is Odd")
