// 𝗖𝗼𝗻𝘃𝗲𝗿𝘁 𝗕𝗶𝗻𝗮𝗿𝘆 𝘁𝗼 𝗗𝗲𝗰𝗶𝗺𝗮𝗹 𝗮𝗻𝗱 𝘃𝗶𝗰𝗲-𝘃𝗲𝗿𝘀𝗮

#include <iostream>
using namespace std;

int B_to_D(int bin)
{
    int dec = 0;
    int base = 1;
    while (bin > 0)
    {
        int lastdig = bin % 10;
        dec += lastdig * base;
        bin /= 10;
        base *= 2;
    }
    return dec;
}

int D_to_B(int dec)
{
    int bin = 0;
    int base = 1;
    while (dec > 0)
    {
        int lastdig = dec % 2;
        bin += lastdig * base;
        dec /= 2;
        base *= 10;
    }
    return bin;
}

int main()
{
    int num, choice;

    cout << "1. Binary to Decimal" << endl;
    cout << "2. Decimal to Binary" << endl;
    cout << "Choice - ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << "Enter Binary Number: ";
        cin >> num;
        cout << "Decimal is: " << B_to_D(num) << endl;
        break;
    }
    case 2:
    {
        cout << "Enter Decimal Number: ";
        cin >> num;
        cout << "Binary is: " << D_to_B(num) << endl;
        break;
    }
    }

    return 0;
}
