class Number:
    def __init__(self, value):
        self.value = value


class Add(Number):
    def __init__(self, value):
        super().__init__(value)

    def left_sum(self, left):
        self.left = left
        sum = 0
        while left != self.value:
            sum += left
            left += 1
        return sum + self.value

    def right_sum(self, right):
        self.right = right
        sum = 0
        while right != self.value:
            sum += right
            right -= 1
        return sum + self.value


class Multiply(Number):
    def __init__(self, value):
        super().__init__(value)

    def left_multiply(self, left):
        self.left = left
        product = 1
        while left != self.value:
            product *= left
            left += 1
        return product * self.value

    def right_multiply(self, right):
        self.right = right
        product = 1
        while right != self.value:
            product *= right
            right -= 1
        return product * self.value


num = int(input("Enter a number: "))
dec = int(input(f"Left or Right number (wrt {num}): "))
if dec < num:
    add = Add(num)
    print(f"Sum of numbers from {dec} to {num}(including {num}) is {add.left_sum(dec)}")
    multiply = Multiply(num)
    print(f"Product of numbers from {dec} to {num}(including {num}) is {multiply.left_multiply(dec)}")
elif dec > num:
    add = Add(num)
    print(f"Sum of numbers from {num} to {dec}(including {num}) is {add.right_sum(dec)}")
    multiply = Multiply(num)
    print(f"Product of numbers from {num} to {dec}(including {num}) is {multiply.right_multiply(dec)}")
else:
    print(f"Sum of numbers from {num} to {dec}(including {num}) is {num}")
    print(f"Product of numbers from {num} to {dec}(including {num}) is {num}")
