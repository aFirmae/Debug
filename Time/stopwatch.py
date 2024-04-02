import time

text1 = "Enter 0 to start stopwatch (endless)."
text2 = "OR"
text3 = "Enter a time (in seconds) to stop at."

print(f"{text1:^45}")
print(f"{text2:^42}")
print(f"{text3:^45}")

stop = int(input("Choice: "))

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

    if i == choice:
        break

print("\nStopwatch stopped.")
