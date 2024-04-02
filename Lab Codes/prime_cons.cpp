// 𝗣𝗿𝗶𝗺𝗲 𝗡𝘂𝗺𝗯𝗲𝗿𝘀 𝗶𝗻 𝗮𝗻 𝗶𝗻𝘁𝗲𝗿𝘃𝗮𝗹 𝘂𝘀𝗶𝗻𝗴 𝗺𝗲𝘁𝗵𝗼𝗱𝘀

#include <iostream>
using namespace std;

class Range
{
public:
    int a, b, count = 0;
    Range(int low, int high)
    {
        a = low;
        b = high;
    }
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
    void print_primes() 
    {
        for (int i = a; i < b; i++)
        {
        if (i == 0 || i == 1)
        {
            continue;
        }
        if (isPrime(i) == 0)
        {
            if (count++ > 0)
            {
                cout << ", ";
            }
            cout << i;
        }
        } 
    }
};

int main()
{
    int low, high, count = 0;
    cout << "Lower Limit: ";
    cin >> low;
    cout << "Higher Limit: ";
    cin >> high;
    
    Range ob(low, high);
    ob.print_primes();
    return 0;
}
    