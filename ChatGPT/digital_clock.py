from time import strftime

def display_clock():
    while True:
        # Format the current time as HH:MM:SS
        current_time = strftime("%I:%M:%S %p")

        # Display the current time
        print(f"\r{current_time}", end="")

        # time.sleep(1) is not needed as we are displaying the current time in a loop


# Call the function to start the clock
start_time = strftime("%I:%M:%S %p")
print(f"Start time: {start_time}")
print("Current time: ")
display_clock()
