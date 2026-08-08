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
    //transpose
 for (int i = 0; i < row; i++)
    {
        for (int j = i+1; j < col; j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    //reverse 
    for(int i=0;i<row;i++){
        int left=0;
        int right=col-1;
        while(left<right){
            swap(a[i][left],a[i][right]);
            left++;
            right--;
        }
    }
    // Matrix Output
    // Matrix Output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
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

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ans[j][n - 1 - i] = arr[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

    return 0;
}
*/