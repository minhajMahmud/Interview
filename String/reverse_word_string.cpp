#include <bits/stdc++.h>
using namespace std;
int main() {
    //etate hocche je word gula revere kore tar reverse;
string s;
getline(cin,s);
reverse(s.begin(),s.end());
int start=0;
for (int i = 0; i <=s.length(); i++)
{
    if(i==s.length()||s[i]==' '){
          reverse(s.begin()+start,s.begin()+i);
          start=i+1;
    }
}
cout<<s;   
    return 0;
}