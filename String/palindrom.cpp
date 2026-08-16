#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
getline(cin,s);
int left=0;
int right=s.length()-1;
bool pal=true;
while(left<right){
    if(s[left]!=s[right]){
        pal=false;
        break;
    }
    left++;
    right--;
}
if(pal) cout<<"Palindrom";
else cout<<"Not";
        return 0;
}