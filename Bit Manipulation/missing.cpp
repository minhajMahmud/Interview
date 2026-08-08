#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int ans=0;// ei loop diye sobgula n projnot xor kore final ans value ber korce 
    for (int i = 0; i < n; i++)
    {
        ans^=i;
    }
    
    for (int i = 0; i < n; i++)
    {
       int x;
       cin>>x;
       ans^=x;
    }
    cout<<ans;

    return 0;
}