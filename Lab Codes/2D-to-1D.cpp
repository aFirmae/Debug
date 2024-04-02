#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Rows and Columns: " << endl;
    cin >> rows >> cols;

    int arr[rows * cols], darr[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "darr[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> darr[i][j];
        }
    }

    int k = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[k++] = darr[i][j];
        }
    }

    cout << "\n 1D Arrray: \n";
    for (int i = 0; i < rows * cols; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
