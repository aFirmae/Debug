#include <iostream>
using namespace std;

class Area
{
public:
    int length, breadth;
    Area(int l, int b)
    {
        length = l;
        breadth = b;
    }
};

class Rectangle : public Area
{
public:
    Rectangle(int l, int b) : Area(l, b)
    {
    }
    int getArea()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle r(10, 20);
    cout << "Area of Rectangle: " << r.getArea() << endl;
    return 0;
}