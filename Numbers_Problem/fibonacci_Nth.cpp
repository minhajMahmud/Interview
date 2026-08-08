#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    if(n==0){ cout<<0;
    return 0;
    }
    int a=0,b=1;
    for(int i=2;i<n;i++){
        int next=a+b;
        a=b;
        b=next;
    }
cout<<b;

    return 0;
}