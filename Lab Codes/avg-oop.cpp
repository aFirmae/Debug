// 𝗔𝘃𝗲𝗿𝗮𝗴𝗲 𝗼𝗳 𝗻𝘂𝗺𝗯𝗲𝗿𝘀 𝗶𝗻 𝗮𝗻 𝗮𝗿𝗿𝗮𝘆

#include <iostream>
using namespace std;

class Number
{
public:
    int avg(int arr[], int size)
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        return sum / size;
    }
};

int main()
{
    int size;
    cout << "Size: ";
    cin >> size;
    int arr[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Num " << i + 1 << ": ";
        cin >> arr[i];
    }
    Number ns;
    cout << "Average of numbers is " << ns.avg(arr, size);

    return 0;
}