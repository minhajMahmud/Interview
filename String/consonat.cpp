#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
int cnt=0;
for(char ch:s){
    if(isalpha(ch)){
        ch=tolower(ch);
        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')cnt++;
    }
  
}
  cout<<cnt;
    

    return 0;
}