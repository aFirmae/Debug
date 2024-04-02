// 𝗣𝗿𝗶𝗻𝘁 𝘁𝗵𝗲 𝗳𝗼𝗹𝗹𝗼𝘄𝗶𝗻𝗴 𝗽𝗮𝘁𝘁𝗲𝗿𝗻 𝘂𝘀𝗶𝗻𝗴 𝗮 𝗺𝗲𝘁𝗵𝗼𝗱:
/*
   𝟭
   𝟭 𝟮
   𝟭 𝟮 𝟯
   𝟭 𝟮 𝟯 𝟰
   𝟭 𝟮 𝟯 𝟰 𝟱
   𝟭 𝟮 𝟯 𝟰 𝟱 𝟲
*/

#include <iostream>
using namespace std;

class Pattern
{
public:
    int limit;
    Pattern(int limit)
    {
        this->limit = limit;
    }
    void printPattern()
    {
        for (int i = 1; i <= limit; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int rows;
    cout << "Rows limit: ";
    cin >> rows;
    Pattern pat(rows);
    pat.printPattern();
    
    return 0;
}