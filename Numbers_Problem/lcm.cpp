#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
cin>>a>>b;
int x=a,y=b;
while(b!=0){
    int tmp=a%b;
    a=b;
    b=tmp;
}
  cout<<" lcm"<<" "<<x*y/a;  

    return 0;
}