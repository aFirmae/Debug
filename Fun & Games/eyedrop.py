# Eye-drop timetable maker

drop_num = int(input("Drops: "))
sleep_time = float(input("Sleep time (hours): "))
time = 24 - sleep_time
interval = time / drop_num
interval_hours = int(interval)
interval_minutes = int((interval - interval_hours) * 60)

start_time = input("Start time : ")
hour, minute = start_time.split(":")
hour = int(hour)
minute = int(minute)
meridian = "AM"
for i in range(drop_num):
    if hour > 12:
        hour -= 12
        meridian = "PM"
    print(f"{i + 1}: {hour:02}:{minute:02} {meridian}")
    hour += interval_hours
    minute += interval_minutes
    if minute > 59:
        minute -= 60
        hour += 1
