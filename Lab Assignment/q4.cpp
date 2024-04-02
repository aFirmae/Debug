#include <iostream>
using namespace std;

class ConsecutiveSum 
{
private:
    int start;

public:
    ConsecutiveSum();
    ConsecutiveSum(int initialValue);

    int calculateSum() 
    {
        int sum = 0;
        for (int i = start; i < start + 5; i++) 
        {
            sum += i;
        }
        return sum;
    }

    int getStart() 
    {
        return start;
    }
};

ConsecutiveSum::ConsecutiveSum() 
{
    start = 1;
}

ConsecutiveSum::ConsecutiveSum(int initialValue)
{
    start = initialValue;
}

int main()
{
    int value;
    cout << "Starting value: ";
    cin >> value;

    ConsecutiveSum consecutiveSum1;
    ConsecutiveSum consecutiveSum2(value);

    int sum1 = consecutiveSum1.calculateSum();
    int sum2 = consecutiveSum2.calculateSum();

    cout << "Sum of 5 consecutive numbers starting from " << consecutiveSum1.getStart() << " is: " << sum1 << std::endl;
    cout << "Sum of 5 consecutive numbers starting from " << consecutiveSum2.getStart() << " is: " << sum2 << std::endl;

    return 0;
}
