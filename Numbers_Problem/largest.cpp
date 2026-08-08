#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int large=0;
    while (n!=0)
    {
        int digit=n%10;
        if(digit>large) large=digit;
        n/=10;
    }
    
cout<<large;
    return 0;
}