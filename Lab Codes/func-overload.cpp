// 𝗙𝘂𝗰𝘁𝗶𝗼𝗻 𝗢𝘃𝗲𝗿𝗹𝗼𝗮𝗱𝗶𝗻𝗴 𝗶𝗻 𝗖++

#include <iostream>
using namespace std;

class Overload
{
    public:
        void func()
        {
            cout << "No parameters" << endl;
        }
        void func(int x)
        {
            cout << "One parameter: " << x << endl;
        }
        void func(int x, int y)
        {
            cout << "Two parameters: " << x << " " << y << endl;
        }
};

int main()
{
    Overload obj;
    obj.func();
    obj.func(7);
    obj.func(9, 10);
    
    return 0;
}
