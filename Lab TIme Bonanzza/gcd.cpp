#include <iostream>
using namespace std;

int islarge(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

int issmall(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;
    else if(b <= a && b <= c)
        return b;
    else
        return c;
}

int gcd(int a, int b, int c, int small)
{
    if (a % small == 0 && b % small == 0 && c % small == 0)
    {
        return small;
    }
    else
    {
        return gcd(a, b, c, small - 1);
    }
}

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int small = issmall(a, b, c);
    int large = islarge(a, b);

    cout << "GCD of " << a << ", " << b << "and " << c << " is " << gcd(a, b, c, small) << endl;

    return 0;
}