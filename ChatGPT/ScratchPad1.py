list = [2, 5, 2, 4, 4, 1, 3, 6, 4, 6, 1, 6, 6, 1, 3, 4, 6, 6, 2, 5]
fi = fixi = cf = sfi = sfixi = 0

for i in range(1, 7):
    fi = list.count(i)
    fixi = i * list.count(i)
    cf += list.count(i)
    print(fi, end="     ")
    print(fixi, end="     ")
    print(cf)
    sfi += fi
    sfixi += fixi

mean = sfixi / sfi
print(f"Mean: {mean}")

sorted_list = sorted(list)
n = len(sorted_list)
median = (sorted_list[n//2] + sorted_list[(n-1)//2]) / 2 if n % 2 == 0 else sorted_list[n//2]
print(f"Median: {median}")

count_dict = {}
for num in list:
    count_dict[num] = count_dict.get(num, 0) + 1

mode = [num for num, count in count_dict.items() if count == max(count_dict.values())]
print(f"Mode: {mode}")