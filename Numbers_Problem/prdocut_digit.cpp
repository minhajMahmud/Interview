#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int prod=1;
while (n!=0)
{
    int x=n%10;
    prod=prod*x;
    n/=10;
}

  cout<<prod;  

    return 0;
}