#include<iostream>
using namespace std;

class Calculator {
    int add(int a, int b) {
        return (a + b);
    }
    int subtract(int a, int b) {
        return (a - b);
    }
    friend void display(int a, int b);
};

void display(int a, int b)
{
    Calculator cal;
    cout << a << " + " << b << "=" << cal.add(a, b);
    cout << a << " - " << b << "=" << cal.subtract(a, b);
}


int main() {
    
    display(5, 6);

    return 0;
}
