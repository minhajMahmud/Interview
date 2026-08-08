/*
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    long long n;
    cin >> n;
    int cnt=0;
    if(n==0) cnt=1;
    else{
        while(n!=0){
            cnt++;
            n=n/10;
        }   
    }
    cout<<cnt;
    return 0;
}
    */
   #include <bits/stdc++.h>
   using namespace std;
   int main() {
   
       int n;
       cin>>n;
       int cnt=0;
       if(n==0)cnt=1;
       else{
 while (n!=0)
       {
        int x=n%10;
        cnt++;
        n=n/10;
       }
       }
      
       cout<<cnt;
       return 0;
   }