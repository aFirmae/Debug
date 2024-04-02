// 𝗔𝗿𝗲𝗮 𝗼𝗳 𝘀𝗾𝘂𝗮𝗿𝗲, 𝗿𝗲𝗰𝘁𝗮𝗻𝗴𝗹𝗲 𝗮𝗻𝗱 𝗰𝗶𝗿𝗰𝗹𝗲 𝘂𝘀𝗶𝗻𝗴 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻 𝗼𝘃𝗲𝗿𝗹𝗼𝗮𝗱𝗶𝗻𝗴.

#include <iostream>
using namespace std;

class Area
{

public:
    void area(int side)
    {
        cout <<"Area of square: " << side * side << "\n";
    }

    void area(int len, int bdth)
    {
        cout <<"Area of rectangle: " << len * bdth << "\n";
    }

    void area(double rad)
    {
        cout <<"Area of circle: " << (3.14) * rad * rad << "\n";
    }
};

int main()
{
    Area shape;

    shape.area(5);

    shape.area(4,6);

    shape.area(7.5);

    return 0;
}
