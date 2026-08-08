#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
    getline(cin,s);
    int len=0,mx=0;
   for (int i = 0; i <= s.length(); i++) {
    if(i==s.length()||s[i]==' '){
        mx=max(mx,len);
            len=0;  
    }else{
        len++;
    }
   }
cout<<mx;
    return 0;
}