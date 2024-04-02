#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    Student()
    {
        name = "Unknown";
    }
    Student(string name)
    {
        this->name = name;
    }
};

int main()
{
    Student s1("john");
    cout << s1.name << endl;

    return 0;
}