// 𝗪𝗔𝗣 𝘁𝗼 𝗰𝗵𝗲𝗰𝗸 𝗮𝗺𝗶𝗰𝗮𝗯𝗶𝗹𝗶𝘁𝘆 𝗼𝗳 𝘁𝘄𝗼 𝗻𝘂𝗺𝗯𝗲𝗿𝘀.

#include<iostream>
using namespace std;

int main()
{
	int n1, n2, sum1 = 0, sum2 = 0;
	cout << "Enter two numbers: " << endl;
	cin >> n1 >> n2;
	for (int i = 1; i <= n1 / 2; i++)
	{
		if (n1 % i == 0)
		{
			sum1 += i;
		}
	}
	for (int i = 1; i <= n2 / 2; i++)
	{
		if (n2 % i == 0)
		{
			sum2 += i;
		}
	}
	if (sum1 == n2 && sum2 == n1)
	{
		cout << "Amicable" << endl;
	}
	else
	{
		cout << "Not Amicable" << endl;
	}

	return 0;
}