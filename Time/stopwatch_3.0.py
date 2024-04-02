# GUI stopwatch in Python

import tkinter as tk
import time


class Stopwatch:
    def __init__(self, root):
        self.root = root
        self.root.title("Stopwatch")
        self.root.geometry("300x200")
        self.is_running = False
        self.start_time = 0
        self.label = tk.Label(self.root, text="00:00:00", font=("Arial", 24))
        self.label.pack(pady=20)
        self.start_button = tk.Button(self.root, text="Start", command=self.start)
        self.start_button.pack(pady=10)
        self.stop_button = tk.Button(self.root, text="Stop", command=self.stop, state=tk.DISABLED)
        self.stop_button.pack(pady=10)
        self.reset_button = tk.Button(self.root, text="Reset", command=self.reset, state=tk.DISABLED)
        self.reset_button.pack(pady=10)

    def start(self):
        if not self.is_running:
            self.is_running = True
            self.start_time = time.time()
            self.update_time()
            self.start_button.config(state=tk.DISABLED)
            self.stop_button.config(state=tk.NORMAL)
            self.reset_button.config(state=tk.NORMAL)

    def stop(self):
        if self.is_running:
            self.is_running = False
            self.start_button.config(state=tk.NORMAL)
            self.stop_button.config(state=tk.DISABLED)

    def reset(self):
        self.is_running = False
        self.start_time = 0
        self.label.config(text="00:00:00")
        self.start_button.config(state=tk.NORMAL)
        self.stop_button.config(state=tk.DISABLED)
        self.reset_button.config(state=tk.DISABLED)

    def update_time(self):
        if self.is_running:
            elapsed_time = time.time() - self.start_time
            hours = int(elapsed_time // 3600)
            minutes = int((elapsed_time % 3600) // 60)
            seconds = int(elapsed_time % 60)
            time_string = f"{hours:02d}:{minutes:02d}:{seconds:02d}"
            self.label.config(text=time_string)
            self.label.after(1000, self.update_time)


root = tk.Tk()
stopwatch = Stopwatch(root)
root.mainloop()
