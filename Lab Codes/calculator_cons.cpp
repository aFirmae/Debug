// 𝗖𝗮𝗹𝗰𝘂𝗹𝗮𝘁𝗼𝗿 𝘂𝘀𝗶𝗻𝗴 𝗢𝗢𝗣

#include <iostream>
using namespace std;

class Calculator
{
public:
    int x, y;
    Calculator(int p, int q)
    {
        x = p;
        y = q;
    }
    int Add()
    {
        return x + y;
    }
    int Sub()
    {
        return abs(x - y);
    }
    int Mult()
    {
        return x * y;
    }
    float Div()
    {
        return (y == 0) ? -1 : ((float)x / y);
    }
    int Rem()
    {
        return x % y;
    }
};

int main()
{
    int num1, num2;
    char choice;

    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;

    cout << "Operator (+, -, *, /, %): ";
    cin >> choice;

    Calculator calc(num1, num2);

    switch (choice)
    {
    case '+':
    {
        cout << "Sum: " << calc.Add();
        break;
    }
    case '-':
    {
        cout << "Difference: " << calc.Sub();
        break;
    }
    case '*':
    {
        cout << "Product: " << calc.Mult();
        break;
    }
    case '/':
    {
        if (calc.Div() != -1)
        {
            cout << "Divided: " << calc.Div();
        }
        else
        {
            cout << "Cannot divide by zero!";
        }
        break;
    }
    case '%':
    {
        cout << "Remainder: " << calc.Rem();
        break;
    }
    default:
    {
        cout << choice << "is not a valid operator!";
    }
    }
    return 0;
}
