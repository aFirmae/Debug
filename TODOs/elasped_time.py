# TODO: Just look how line 20-23 works

import time

# Get the current time
start_time = time.strftime("%H:%M:%S")

# Start the stopwatch
input("Press Enter to start the stopwatch.")
start = time.time()

# Stop the stopwatch
input("Press Enter to stop the stopwatch.")
end = time.time()

# Calculate the elapsed time
elapsed_time = end - start

# Format the elapsed time
hours = int(elapsed_time // 3600)
minutes = int((elapsed_time % 3600) // 60)
seconds = int(elapsed_time % 60)
milliseconds = int((elapsed_time % 1) * 1000)

# Print the elapsed time
print(f"Start time: {start_time}")
print(f"Elapsed time: {hours:02d}:{minutes:02d}:{seconds:02d}:{milliseconds:03d}")


# Malfunctioning digital clock
# TODO: Make the code work LOL! But, actually make the seconds, minutes and hours coordinate.

# import time
#
# hour = int(time.strftime("%I"))
# minute = int(time.strftime("%M"))
# second = int(time.strftime("%S"))
# meridian = time.strftime("%p")
#
# print("Current time: ")
# i = 0
# while True:
#     seconds = i % 60
#     minutes = (i // 60) % 60
#     hours = (i // 3600) % 24
#
#     counter = f"{hour + hours:02}:{minute + minutes:02}:{second + seconds:02}"
#     print(f"\r{counter} {meridian}", end="")
#
#     if second + seconds == 59:
#         i += 60 - (second + seconds)
#         # time.sleep(60 - (second + seconds))
#     elif minute + minutes == 59 and (second + seconds) == 59:
#         i += 3600 - ((minute + minutes) * 60 + (second + seconds))
#         # time.sleep(3600 - ((minute + minutes) * 60 + (second + seconds)))
#     elif hour + hours == 23 and (minute + minutes) == 59 and (second + seconds) == 59:
#         i += 86400 - ((hour + hours) * 3600 + (minute + minutes) * 60 + (second + seconds))
#         # time.sleep(86400 - ((hour + hours) * 3600 + (minute + minutes) * 60 + (second + seconds)))
#     else:
#         i += 1
#         # time.sleep(1)
#     time.sleep(1)
#
#     if seconds + second == 59:
#         print("\nThanks for using this crappy code. LOL")
#         break
