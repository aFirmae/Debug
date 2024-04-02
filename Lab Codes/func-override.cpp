// 𝗙𝘂𝗻𝗰𝘁𝗶𝗼𝗻 𝗼𝘃𝗲𝗿𝗿𝗶𝗱𝗶𝗻𝗴 𝗶𝗻 𝗖++

#include <iostream>
using namespace std;

class Base
{
    public:
        void func()
        {
            cout << "Base" << endl;
        }
};

class Derived : public Base
{
    public:
        void func()
        {
            cout << "Derived" << endl;
        }
};

int main()
{
    Derived obj;
    obj.func();
    obj.func();

    return 0;
}