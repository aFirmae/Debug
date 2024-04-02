// 𝗙𝗮𝗰𝘁𝗼𝗿𝗶𝗮𝗹 𝘂𝘀𝗶𝗻𝗴 𝗰𝗼𝗽𝘆 𝗰𝗼𝗻𝘀𝘁𝗿𝘂𝗰𝘁𝗼𝗿

#include <iostream>
using namespace std;

class Numbers
{
public:
	int num;

	Numbers(int a)
	{
		num = a;
	}
	Numbers(Numbers& temp)
	{
		num = temp.num;
	}

	int factorial(int value)
	{
		if (value == 0)
		{
			return 1;
		}
		else
		{
			return value * factorial(value - 1);
		}
	}
};

int main()
{
	int num;
	cout << "Number: ";
	cin >> num;

	Numbers ob(num);
	cout << "Factorial: " << ob.factorial(ob.num) << endl;
	return 0;
}