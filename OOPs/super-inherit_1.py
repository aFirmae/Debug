class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age


class Student(Person):
    def __init__(self, name, age, g_year):
        super().__init__(name, age)
        self.g_year = g_year

    def cred(self):
        print("I am a Student")
        print(f"My name is {self.name}")
        print(f"My age is {self.age}")
        print(f"My grad year is {self.g_year}")

class Employee(Person):
    def __init__(self, name, age, salary):
        super().__init__(name, age)
        self.salary = salary

    def cred(self):
        print("I am an Employee")
        print(f"My name is {self.name}")
        print(f"My age is {self.age}")
        print(f"My salary is {self.salary}")

student = Student("Dan", "20", "2019")
student.cred()

employee = Employee("John", "30", "100000")
employee.cred()
