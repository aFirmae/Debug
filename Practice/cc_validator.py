# Python credit card validator program (using Luhn's  algorithm)
# Fake number for output: 4012-8888-8888-1881
# Real number (mother's) : 4726-4279-5709-6928

# 1. Remove any '-' or ' '
# 2. Add all digits in the odd places from right to left
# 3. Double every second digit from right to left.
#        (If result is a two-digit number,
#        add the two-digit number together to get a single digit.)
# 4. Sum the totals of steps 2 & 3
# 5. If sum is divisible by 10, the credit card # is valid

# Step 1:
cc_num_real = input("Credit Card Number: ")
cc_num_real1 = cc_num_real.replace("-", "").replace(" ", "")
cc_num = cc_num_real1[::-1]

# Step 2:
odd_sum = 0
for i in cc_num[::2]:
    odd_sum += int(i)

# Step 3
even_doubled_sum = 0
for i in cc_num[1::2]:
    i = int(i) * 2
    if i > 9:
        even_doubled_sum += (i // 10) + (i % 10)
    else:
        even_doubled_sum += i

# Step 4
total = odd_sum + even_doubled_sum

# Step 5
if total % 10 == 0:
    print(f"{cc_num_real} : Valid Credit Card Number.")
else:
    print(f"{cc_num_real} : Invalid Credit Card Number.")
