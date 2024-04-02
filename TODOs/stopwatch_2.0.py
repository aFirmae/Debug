# TODO: Make the time from when the user inputs their choice.

import time
from datetime import datetime, timedelta

text1 = "Enter 0 to start stopwatch (endless)."
text2 = "OR"
text3 = "Enter a time (in seconds) to stop at."

print(f"{text1:^45}")
print(f"{text2:^42}")
print(f"{text3:^45}")

# Start the stopwatch
stop = int(input("Choice: "))
start = time.time()
# Get the current time
start_time = datetime.now()
# Subtract one second from the current time
one_second_later = start_time + timedelta(seconds=1)


if stop == 0:
    choice = None
else:
    choice = stop + 1

i = 0
while True:
    seconds = i % 60
    minutes = (i // 60) % 60
    hours = (i // 3600) % 24
    days = i // 86400

    stopwatch_counter = f"{days:02}:{hours:02}:{minutes:02}:{seconds:02}"
    print(f"\r{stopwatch_counter}", end="")

    i += 1
    time.sleep(1)

    # Stop the stopwatch
    if i == choice:
        end = time.time()
        print()
        break

# Calculate the current time
current_time = start_time + timedelta(seconds = choice) # type: ignore

# Print the start time, elapsed time, and current time
print("Start time:", one_second_later.strftime("%I:%M:%S %p"))
# print("Elapsed time:", timedelta(seconds=choice - 1))
print("Current time:", current_time.strftime("%I:%M:%S %p"))
