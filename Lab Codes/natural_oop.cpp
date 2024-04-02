// 𝗦𝘂𝗺 𝗼𝗳 𝗳𝗶𝗿𝘀𝘁 𝗻 𝗻𝗮𝘁𝘂𝗿𝗮𝗹 𝗻𝘂𝗺𝗯𝗲𝗿𝘀 𝘂𝘀𝗶𝗻𝗴 𝗿𝗲𝗰𝘂𝗿𝘀𝗶𝗼𝗻

#include<iostream>
using namespace std;
 
class Number
{
public:
    int sum(int limit)
    {
        if(limit == 1)
        {
            return 1;
        }
        else
        {
            return limit + sum(limit - 1);
        }
    }
};

int main()
{
    int lim;
    cout << "Limit: ";
    cin >> lim;
    if(lim < 1)
    {
        cout << "Natural numbers starts from 1 :D";
        return 0;
    }
    Number nat;
    cout <<"Sum of first " << lim << " natural numbers is " <<  nat.sum(lim);

    return 0;
}