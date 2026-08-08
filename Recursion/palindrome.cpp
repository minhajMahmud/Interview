#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s,int left,int right){
    if(left>=right) return;
    if(s[left]!=s[right]){
        return false;
    }
    return palindrome(s,left+1,right-1);
}
int main() {
string s;
cin>>s;
int n=s.length();
if(palindrome(s,0,n-1)){
    cout<<"palidrome";
}else{
    cout<<"NOt";
}

    return 0;
}