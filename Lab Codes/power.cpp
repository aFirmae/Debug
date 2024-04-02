// 𝗣𝗼𝘄𝗲𝗿 𝗼𝗳 𝗮 𝗻𝘂𝗺𝗯𝗲𝗿 𝘂𝘀𝗶𝗻𝗴 𝗿𝗲𝗰𝘂𝗿𝘀𝗶𝘃𝗲 𝗺𝗲𝘁𝗵𝗼𝗱

#include <iostream>
using namespace std;

class Numbers
{
public:
    int power(int base, int exp)
    {
        if (exp == 0)
        {
            return 1;
        }
        else
        {
            return base * power(base, exp - 1);
        }
    }
};

int main()
{
    Numbers num;
    int base, exp;
    cout << "Base: ";
    cin >> base;
    cout << "Exponent: ";
    cin >> exp;

    cout << base << "^" << exp << " = " << num.power(base, exp);

    return 0;
}
