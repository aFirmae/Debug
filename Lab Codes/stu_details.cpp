// 𝗦𝘁𝘂𝗱𝗲𝗻𝘁 𝗱𝗲𝘁𝗮𝗶𝗹𝘀 𝘂𝘀𝗶𝗻𝗴 𝗰𝗼𝗻𝘀𝘁𝗿𝘂𝗰𝘁𝗼𝗿

#include <iostream>
#include <string>
using namespace std;

class Details
{
public:
  string name, sec;
  int cls, roll;
  Details(string a, int b, int c, string d)
  {
    name = a;
    cls = b;
    roll = c;
    sec = d;
  }
};

int main() 
{
  Details stu("David", 12, 20, "C");
  cout << stu.name << endl;
  cout << stu.cls << endl;
  cout << stu.roll << endl;
  

  return 0;
}