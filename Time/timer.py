import time
#  time.sleep(x)  ---> waits for x amount of seconds in the console / terminal

time_input = int(input("Time (in seconds): "))
for i in range(time_input, 0, -1):
    seconds = i % 60
    minutes = int(i / 60) % 60
    hours = int(i / 3600) % 24
    days = int(i / 86400)
    print(f"\r{days:02}:{hours:02}:{minutes:02}:{seconds:02}", end="")
    time.sleep(1)

print("\rTIME'S UP!")
