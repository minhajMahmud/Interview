#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    int a[100][100];
    int Primary_sum = 0;
    int Secondary_sum = 0;

    // Matrix Input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    // Find Diagonal Sum
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            //primary diagonal
            if (i == j)
            {
                Primary_sum += a[i][j];
            }
//secondary
            if (i + j == row - 1)
            {
                Secondary_sum += a[i][j];
            }
        }
    }

    cout << "Primary Sum = " << Primary_sum << endl;
    cout << "Secondary Sum = " << Secondary_sum << endl;

    return 0;
}