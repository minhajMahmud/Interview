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
bool identity=true;

    // Matrix Output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if(i==j) {
            if(a[i][j]!=1){
                identity=false;
            }
           }else{
            if(a[i][j]!=0){
                identity=false;
            }
           }
        }
    }
if(identity) cout<<"identity";
else cout<<"Not";
    return 0;
}