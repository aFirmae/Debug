// 𝗙𝗮𝗰𝘁𝗼𝗿𝗶𝗮𝗹 𝗼𝗳 𝗮 𝗻𝘂𝗺𝗯𝗲𝗿 𝘂𝘀𝗶𝗻𝗴 𝗿𝗲𝗰𝘂𝗿𝘀𝗶𝗼𝗻

#include<iostream>
using namespace std;
 
class Number
{
public:
    int fact(int limit)
    {
        if(limit == 0)
        {
            return 1;
        }
        else
        {
            return limit * fact(limit - 1);
        }
    }
};

int main()
{
    int num;
    cout << "Num: ";
    cin >> num;
    if(num < 0)
    {
        cout << "That's not possible :D";
        return 0;
    }
    Number nat;
    cout <<"Factorial of " << num << " is " <<  nat.fact(num) << endl;

    return 0;
}