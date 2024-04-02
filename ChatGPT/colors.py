reset_color = "\033[0m"
bold = "\033[1m"
u_line = "\033[4m"

# Primary Colors
black = "\033[30m"
red = "\033[31m"
green = "\033[32m"
yellow = "\033[33m"
blue = "\033[34m"
magenta = "\033[35m"
cyan = "\033[36m"
white = "\033[37m"

# Secondary Colors
bright_black = "\033[90m"
bright_red = "\033[91m"
bright_green = "\033[92m"
bright_yellow = "\033[93m"
bright_blue = "\033[94m"
bright_magenta = "\033[95m"
bright_cyan = "\033[96m"
bright_white = "\033[97m"

# Display the colors
color_list = [
    (black, "Black"),
    (red, "Red"),
    (green, "Green"),
    (yellow, "Yellow"),
    (blue, "Blue"),
    (magenta, "Magenta"),
    (cyan, "Cyan"),
    (white, "White"),
    (bright_black, "Bright Black"),
    (bright_red, "Bright Red"),
    (bright_green, "Bright Green"),
    (bright_yellow, "Bright Yellow"),
    (bright_blue, "Bright Blue"),
    (bright_magenta, "Bright Magenta"),
    (bright_cyan, "Bright Cyan"),
    (bright_white, "Bright White")
]

for color, name in color_list:
    print(f"{bold}{color}{name}{reset_color}")
