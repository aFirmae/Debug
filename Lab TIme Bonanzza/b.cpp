#include<iostream>
using namespace std;

class person
{
private:
    string name;
    int age;

public:
    void read_data(char* name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display_data()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student : public person
{
private:
    int roll;
    int marks;

public:
    void get_data(int roll, int marks)
    {
        this->roll = roll;
        this->marks = marks;
    }

    void display_data()
    {
        person::display_data();
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

class employee : public person
{
private:
    int basic_pay;
    int house_rent;
    int salary;

public:
    void get_data(int basic_pay, int house_rent, int salary)
    {
        this->basic_pay = basic_pay;
        this->house_rent = house_rent;
        this->salary = salary;
    }

    void display_data()
    {
        person::display_data();
        cout << "Basic Pay: " << basic_pay << endl;
        cout << "House Rent: " << house_rent << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    student s;
    s.read_data("souhardya", 20);
    s.get_data(1, 90);
    s.display_data();

    employee e;
    e.read_data("nilasis", 20);
    e.get_data(1000, 500, 1500);
    e.display_data();

    return 0;
}