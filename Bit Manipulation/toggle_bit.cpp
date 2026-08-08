#include <bits/stdc++.h>
using namespace std;
int main() {
//0 chnagees 1 and 1 changes to 0
    int n,i;
    cin>>n>>i;
    n=n^(1<<i);
cout<<n;

    return 0;
}