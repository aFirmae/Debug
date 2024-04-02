#include<iostream>
#include<string>
using namespace std;

class student
{
private:
    int roll;
    float marks;

public:
    void getdata(int roll, float marks)
    {
        this->roll = roll;
        this->marks = marks;
    }

    void show_data()
    {
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }

    void compute_data()
    {
        cout << "Percentage: " << marks << "%" << endl;
    }
};

class person : public student
{
private:
    string name;
    int age;

public:
    void read_data(string name, int age)
    {
        this->name =  name;
        this->age = age;
    }

    void display_data()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        student::show_data();
    }
};

class game : public person
{
private:
    string game_name;

public:
    void read_game(string game_name)
    {
        this->game_name =  game_name;
    }

    void display_game()
    {   
        cout << "Game Name: " << game_name << endl;
    }
};

int main()
{
    game g;

    g.getdata(1, 90);
    g.read_data("Rahul", 20);
    g.display_data();
    return 0;
}