#include <iostream>
using namespace std;

int main()
{
    int row1, col1, row2, col2, choice;

    cout << "Order of Matrix 1: \n";
    cin >> row1 >> col1;

    cout << "Order of Matrix 2: \n";
    cin >> row2 >> col2;

    int mat1[row1][col1], mat2[row2][col2], add[row1][col1], multiply[row1][col2];

    cout << "\t Matrix 1 \n";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << "mat1[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> mat1[i][j];
        }
    }

    cout << "\n\t Matrix 2 \n";
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << "mat2[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> mat2[i][j];
        }
    }

    cout << "\nPress: \n"
                 "1. Addition\n"
                 "2. Multiplication\n";
    cout << "Choice - ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        if (row1 != row2 && col1 != col2)
        {
            cout << "Addition is only possible for matrices of similar order.\n";
            return 0;
        }
        cout << "\n\t Sum of the Matrices \n";
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                add[i][j] = mat1[i][j] + mat2[i][j];
                cout << add[i][j] << "  ";
            }
            cout << "\n";
        }
        break;
    }
    case 2:
    {
        if (col1 != row2)
        {
            cout << "Multiplication of matrices of these order is not possible.\n";
            return 0;
        }
        // Initialize multiply matrix with zeros
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                multiply[i][j] = 0;
            }
        }

        cout << "\n\t Product of the Matrices \n";
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < col1; k++)
                {
                    multiply[i][j] += mat1[i][k] * mat2[k][j];
                }
                cout << multiply[i][j] << "  ";
            }
            cout << "\n";
        }
        break;
    }
    }
    return 0;
}
 
