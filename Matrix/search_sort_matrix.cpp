#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    int a[100][100];

    // Input Matrix
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    int target;
    cin >> target;

    int i = 0;
    int j = col - 1;

    while(i < row && j >= 0)
    {
        if(a[i][j] == target)
        {
            cout << "Found";
            return 0;
        }
        else if(a[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    cout << "Not Found";

    return 0;
}