#include <iostream>
using namespace std;

class Calculator
{
public:
    int real1, img1, real2, img2;

    void get_value1(int r1, int i1)
    {
        real1 = r1;
        img1 = i1;
    }

    void get_value2(int r2, int i2)
    {
        real2 = r2;
        img2 = i2;
    }

    ~Calculator() {}
};

class Complex
{
public:
    Calculator cal;

    void display()
    {
        cout << "Sum = " << cal.real1 + cal.real2 << " + " << "i" << cal.img1 + cal.img2 << endl;
        cout << "Difference = " << cal.real1 - cal.real2 << " + " << "i" << cal.img1 - cal.img2 << endl;
    }
};

int main()
{
    int real1, img1, real2, img2;
    cout << "Enter the real and imaginary part of first complex number: ";
    cin >> real1 >> img1;
    cout << "Enter the real and imaginary part of second complex number: ";
    cin >> real2 >> img2;
    Complex c;
    c.cal.get_value1(real1, img1);
    c.cal.get_value2(real2, img2);
    c.display();
    return 0;
}