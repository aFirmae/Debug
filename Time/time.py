import time

print(time.ctime(0))  # convert seconds since the epoch to a string | epoch - when the computer thinks time began
# Output: Thu Jan  1 00:00:00 1970

print(time.time())   # time() returns the current time in seconds since the epoch as a floating point number
# Output: 1632481806.0

print(time.ctime(time.time()))  # convert seconds since the epoch to a string
# Output: Fri Sep 24 14:50:06 2021

print(time.localtime())  # convert seconds since the epoch to a time tuple | time tuple - a tuple of 9 integers
# Output: time.struct_time(tm_year=2021, tm_mon=9, tm_mday=24, tm_hour=14, tm_min=50, tm_sec=6, tm_wday=4, tm_yday=267, tm_isdst=0)

print(time.mktime(time.localtime()))  # convert a time tuple to seconds since the epoch
# Output: 1632481806.0

print(time.asctime())  # convert a time tuple to a string
# Output: Fri Sep 24 14:50:06 2021

print(time.asctime(time.localtime()))  # convert a time tuple to a string
# Output: Fri Sep 24 14:50:06 2021

print(time.strftime("%A, %B %d %Y %I:%M:%S %p", time.localtime()))  # convert a time tuple to a string
# Output: Friday, September 24 2021 02:50:06 PM

print(time.strptime("Friday, September 24 2021 02:50:06 PM", "%A, %B %d %Y %I:%M:%S %p"))  # convert a string to a time tuple
# Output: time.struct_time(tm_year=2021, tm_mon=9, tm_mday=24, tm_hour=14, tm_min=50, tm_sec=6, tm_wday=4, tm_yday=267, tm_isdst=-1)

print(time.gmtime())  # convert seconds since the epoch to a time tuple in UTC
# Output: time.struct_time(tm_year=2021, tm_mon=9, tm_mday=24, tm_hour=19, tm_min=50, tm_sec=6, tm_wday=4, tm_yday=267, tm_isdst=0)

print(time.sleep(5))  # suspend execution of the calling thread for the given number of seconds
# Output: None | 5 seconds later

"""
# *This code is using the time module in Python to perform various time-related operations. 
1. The first line prints the string representation of the epoch time (0 seconds since the epoch).
2. The second line prints the current time in seconds since the epoch as a floating-point number.
3. The third line prints the string representation of the current time.
4. The fourth line prints the current time as a time tuple.
5. The fifth line converts the current time as a time tuple to seconds since the epoch.
6. The sixth line prints the current time as a string.
7. The seventh line prints the current time as a string using a time tuple.
8. The eighth line prints the current time as a formatted string.
9. The ninth line converts a specific string representation of time to a time tuple.
10. The tenth line prints the current time as a time tuple in UTC.
11. The eleventh line suspends the execution of the program for 5 seconds.

# *Step-wise explanation:
1. The code imports the time module.
2. The first line uses the ctime() function to convert the epoch time (0) to a string representation and prints it.
3. The second line uses the time() function to get the current time in seconds since the epoch and prints it.
4. The third line combines the time() and ctime() functions to get the current time in seconds since the epoch and prints it as a string.
5. The fourth line uses the localtime() function to convert the current time in seconds since the epoch to a time tuple and prints it.
6. The fifth line combines the localtime() and mktime() functions to convert the current time as a time tuple to seconds since the epoch and prints it.
7. The sixth line uses the asctime() function to convert the current time as a time tuple to a string and prints it.
8. The seventh line combines the asctime() and localtime() functions to convert the current time as a time tuple to a string and prints it.
9. The eighth line uses the strftime() function to format the current time as a string using a specific format and prints it.
10. The ninth line uses the strptime() function to convert a specific string representation of time to a time tuple and prints it.
11. The tenth line uses the gmtime() function to convert the current time in seconds since the epoch to a time tuple in UTC and prints it.
12. The eleventh line uses the sleep() function to suspend the execution of the program for 5 seconds.
"""
