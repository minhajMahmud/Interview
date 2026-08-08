#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    int a[100][100];

    // Matrix Input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    // Matrix Output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}