// 𝗥𝗲𝘃𝗲𝗿𝘀𝗲 𝗮 𝘀𝗲𝗻𝘁𝗲𝗻𝗰𝗲 𝘂𝘀𝗶𝗻𝗴 𝗮 𝗺𝗲𝘁𝗵𝗼𝗱

#include <iostream>
#include <string>
using namespace std;

class Words
{
public:
    string reverse(string sen)
    {
        string rev;
        for (int i = sen.length() - 1; i >= 0; i--)
        {
            rev += sen[i];
        }
        return rev;
    }
};

int main()
{
    Words str;
    string sen;
    cout << "Sentence: ";
    getline(cin, sen);

    string reversedSen = str.reverse(sen);
    cout << "Reversed Sentence:\n" << reversedSen;

    return 0;
}
