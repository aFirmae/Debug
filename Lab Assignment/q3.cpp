#include <iostream>
using namespace std;

class Pattern
{
public:
    int n;
    Pattern(int n)
    {
        this->n = n;
    }
    friend void pat1(Pattern p), pat2(Pattern p), pat3(Pattern p), pat4(Pattern p);
};

void pat1(Pattern p)
{
    for (int i = 1; i <= p.n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pat2(Pattern p)
{
    for (int i = 1; i <= p.n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pat3(Pattern p)
{
    char ch = 'a';
    for (int i = 1; i <= p.n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        ch = 'a';
        cout << endl;
    }
}

void pat4(Pattern p)
{
    for (int i = 1; i <= p.n; i++)
    {
        for (int j = 1; j <= p.n; j++)
        {
            if (j < p.n - i + 1)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Pattern Size: ";
    cin >> n;

    Pattern p(n);
    cout << "\nPattern 1: " << endl;
    pat1(p);
    cout << "\nPattern 2: " << endl;
    pat2(p);
    cout << "\nPattern 3: " << endl;
    pat3(p);
    cout << "\nPattern 4: " << endl;
    pat4(p);
    return 0;
}


