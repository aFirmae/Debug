# dictionary comprehension = create dictionaries using an expression
#                            can replace for loops and certain lambda functions
#
# dictionary = {key: expression for (key,value) in iterable}
# dictionary = {key: expression for (key,value) in iterable if conditional}
# dictionary = {key: (if/else) for (key,value) in iterable}
# dictionary = {key: function(value) for (key,value) in iterable}


# ----------- EXAMPLE 1 -------------
cities_in_F = {'New York': 32, 'Boston': 75, 'Los Angeles': 100, 'Chicago': 50, 'Miami': 82}

cities_in_C = {key: round((value - 32) * (5/9), 2) for (key,value) in cities_in_F.items()}
print(cities_in_C)


# ----------- EXAMPLE 2 -------------
weather = {'New York': 'snowing', 'Boston': 'sunny', 'Los Angeles': 'sunny', 'Chicago': 'cloudy', 'Miami': 'sunny'}

sunny_weather = {key: value for (key,value) in weather.items() if value == 'sunny'}
print(sunny_weather)


# ----------- EXAMPLE 3 -------------
cities = {'New York': 32, 'Boston': 75, 'Los Angeles': 100, 'Chicago': 50, 'Miami': 82}

desc_cities = {key: ('WARM' if value >= 80 else 'COLD') for (key,value) in cities.items()}
print(desc_cities)


# ----------- EXAMPLE 4 -------------
cities = {'New York': 32, 'Boston': 75, 'Los Angeles': 100, 'Chicago': 50, 'Miami': 82}

def check_temp(value):
    if value >= 94:
        return 'HOT'
    elif 94 > value >= 80:
        return 'WARM'
    else:
        return 'COLD'

desc_cities = {key: check_temp(value) for (key,value) in cities.items()}
print(desc_cities)


# ----------- EXAMPLE 5 -------------
print([i+j for i in "abc" for j in "def"])
# Output: ['ad', 'ae', 'af', 'bd', 'be', 'bf', 'cd', 'ce', 'cf']

# The above code is equivalent to the following code
result = []
for i in "abc":
    for j in "def":
        result.append(i+j)
print(result)

# It takes the value of i as 'a' and j as 'd' and appends it to the result list
# Then it takes the value of i as 'a' and j as 'e' and appends it to the result list
# Then it takes the value of i as 'a' and j as 'f' and appends it to the result list
# Since there are no more values for j, it takes the value of i as 'b' and j as 'd' and appends it to the result list
# Then it takes the value of i as 'b' and j as 'e' and appends it to the result list
# Then it takes the value of i as 'b' and j as 'f' and appends it to the result list
# Since there are no more values for j, it takes the value of i as 'c' and j as 'd' and appends it to the result list
# Then it takes the value of i as 'c' and j as 'e' and appends it to the result list
# Then it takes the value of i as 'c' and j as 'f' and appends it to the result list
# Since there are no more values for j, it stops the execution
