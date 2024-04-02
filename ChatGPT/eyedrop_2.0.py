import datetime

def calculate_interval(available_time, num_drops):
    interval = available_time / num_drops
    interval_hours = int(interval)
    interval_minutes = int((interval - interval_hours) * 60)
    return interval_hours, interval_minutes

def get_valid_input(prompt, input_type):
    while True:
        try:
            value = input_type(input(prompt))
            if value < 0:
                raise ValueError
            return value
        except ValueError:
            print("Invalid input. Please enter a positive value.")

def print_timetable(start_time, interval_hours, interval_minutes, num_drops):
    current_time = start_time
    for drop_number in range(num_drops):
        formatted_time = current_time.strftime("%I:%M %p")
        print(f"{drop_number + 1}: {formatted_time}")
        current_time += datetime.timedelta(hours=interval_hours, minutes=interval_minutes)


drop_num = get_valid_input("Drops: ", int)
sleep_time = get_valid_input("Sleep time (hours): ", float)
available_time = 24 - sleep_time

interval_hours, interval_minutes = calculate_interval(available_time, drop_num)

start_time_str = input("Start time (HH:MM AM/PM): ")
start_time = datetime.datetime.strptime(start_time_str, "%I:%M %p")

print_timetable(start_time, interval_hours, interval_minutes, drop_num)
