#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int cnt=0;
    while (n>0)
    {
        if(n&1) //last bit 1
        cnt++;
        n=n>>1;
    }
    cout<< cnt;
    return 0;
}