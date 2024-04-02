// 𝗣𝗿𝗶𝗺𝗲 𝗡𝘂𝗺𝗯𝗲𝗿𝘀 𝗶𝗻 𝗮𝗻 𝗶𝗻𝘁𝗲𝗿𝘃𝗮𝗹 𝘂𝘀𝗶𝗻𝗴 𝗺𝗲𝘁𝗵𝗼𝗱𝘀

#include <iostream>
using namespace std;

class Numbers
{
public:
    int isPrime(int num)
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                return 1;
            }
        }
        return 0;
    }
};

int main()
{
    Numbers primes;
    int low, high, count = 0;
    cout << "Lower Limit: ";
    cin >> low;
    cout << "Higher Limit: ";
    cin >> high;
    for (int i = low; i < high; i++)
    {
        if (i == 0 || i == 1)
        {
            continue;
        }
        if (primes.isPrime(i) == 0)
        {
            if (count++ > 0)
            {
                cout << ", ";
            }
            cout << i;
        }
    }

    cout << endl;
    return 0;
}
