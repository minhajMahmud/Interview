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
    for (int i = row-1; i >=0; i--)
    {
        for (int j = col-1; j >=0; j--)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100][100];
    int ans[100][100];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            ans[n-1-i][n-1-j]=arr[i][j];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
*/