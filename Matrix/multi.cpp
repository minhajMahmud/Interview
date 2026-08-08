#include <iostream>
using namespace std;

int main()
{
    int row1, col1,row2,col2;
    cin >> row1 >> col1;
    cin >> row2 >> col2;
if(col1 != row2)
    {
        cout << "Matrix multiplication is not possible.";
        return 0;
    }
    int a[100][100];
    int b[100][100];
    int result[100][100];

    // Matrix Input
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> b[i][j];
        }
    }
      for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            result[i][j]=0;
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for(int k=0;k<col1;k++){
                result[i][j]+=a[i][k]*b[k][j];

            }
        }
    }

    // Matrix Output
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}