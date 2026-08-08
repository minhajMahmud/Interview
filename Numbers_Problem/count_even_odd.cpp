#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int cnt1=0,cnt2=0;
while(n!=0){
    int digit=n%10;
    if(digit%2==0) cnt1++;
    else cnt2++;
    n=n/10;
}
cout<<"even" << cnt1<<"odd"<<cnt2;


    return 0;
}