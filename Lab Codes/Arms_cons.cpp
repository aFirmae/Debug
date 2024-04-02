// 𝗔𝗿𝗺𝘀𝘁𝗼𝗿𝗻𝗴 𝗡𝘂𝗺𝗯𝗲𝗿 𝘂𝘀𝗶𝗻𝗴 𝗢𝗢𝗣

#include <iostream>
#include <cmath>
using namespace std;

class Armstrong
{
public:
    int num;
    Armstrong(int x)
    {
        num = x;
    }
    int isArm()
    {
        int digits = 0, temp = num, rem, sum = 0;
        while (temp)
        {
            temp /= 10;
            digits++;
        }
        temp = num;
        while (temp)
        {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }
        return (sum == num) ? 1 : 0;
    }
};

int main()
{
    int num;
    cout << "Number: ";
    cin >> num;
    Armstrong arm(num);
    cout << num << " is " << ((arm.isArm()) ? "" : "not ") << "an Armstrong number.";
    return 0;
}
