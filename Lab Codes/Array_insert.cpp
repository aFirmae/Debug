// 𝗜𝗻𝘀𝗲𝗿𝘁 𝗮𝗻 𝗲𝗹𝗲𝗺𝗲𝗻𝘁 𝗶𝗻 𝗮𝗻 𝗔𝗿𝗿𝗮𝘆

#include<iostream>
using namespace std;

void input_array(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << endl;
}

void print_array(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	cout << endl << endl;
}

void insert(int* arr, int size, int data, int pos)
{
	if (pos > size)
	{
		cout << "Invalid Position!";
		return;
	}
	for (int i = size - 1; i > pos - 2; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[pos - 1] = data;
}

int min_num(int* arr, int size)
{
	int min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int max_num(int* arr, int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	int size, data, pos;
	cout << "Array size: ";
	cin >> size;

	int arr[size];
	input_array(arr, size);

	cout << "Insert value: ";
	cin >> data;
	cout << "At position: ";
	cin >> pos;

	cout << endl;
	cout << "Before insertion: " << endl;
	print_array(arr, size);

	size += 1;
	insert(arr, size, data, pos);

	cout << "After insertion: " << endl;
	print_array(arr, size);

	cout << "Minimum number: " << min_num(arr, size) << endl;
	cout << "Maximum number: " << max_num(arr, size) << endl;

	return 0;
}