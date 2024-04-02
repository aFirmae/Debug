// 𝗦𝘂𝗺 𝗼𝗳 𝗡 𝗻𝗮𝘁𝘂𝗿𝗮𝗹 𝗻𝘂𝗺𝗯𝗲𝗿𝘀 𝘂𝘀𝗶𝗻𝗴 𝗿𝗲𝗰𝘂𝗿𝘀𝗶𝘃𝗲 𝗺𝗲𝘁𝗵𝗼𝗱

#include <iostream>
using namespace std;

class Numbers
{
public:
    int nsum(int limit)
    {
        if (limit == 1)
        {
            return 1;
        }
        else
        {
            return limit + nsum(limit - 1);
        }
    }
};

int main()
{
    Numbers sum;
    int limit;
    cout << "Limit: ";
    cin >> limit;
    cout << "Sum = " << sum.nsum(limit);

    return 0;
}