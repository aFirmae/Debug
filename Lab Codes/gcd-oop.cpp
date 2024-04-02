// 𝗚𝗖𝗗 𝗼𝗳 𝘁𝘄𝗼 𝗻𝘂𝗺𝗯𝗲𝗿𝘀 𝘂𝘀𝗶𝗻𝗴 𝗿𝗲𝗰𝘂𝗿𝘀𝗶𝗼𝗻

#include <iostream>
using namespace std;

class Number
{
public:
    int gcd(int x, int y)
    {
        if (x == 0)
        {
            return y;
        }
        else if (y == 0)
        {
            return x;
        }
        else
        {
            return gcd(y, x % y);
        }
    }
};

int main()
{
    int num1, num2;
    cout << "Num 1: ";
    cin >> num1;
    cout << "Num 2: ";
    cin >> num2;

    Number ns;
    cout << "GCD of " << num1 << " and " << num2 << " is " << ns.gcd(num1, num2);

    return 0;
}