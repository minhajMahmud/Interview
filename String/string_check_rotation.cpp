#include <bits/stdc++.h>
using namespace std;
int main() {
//s2 যদি s1 + s1-এর মধ্যে থাকে, তাহলে তারা rotation।
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()) {
        cout<<"NO rotations";
        return 0;
    }
    else if((s1+s1).find(s2)!=string::npos){
        cout<<"rotations";
    }else{
        cout<<"NO";
    }
    return 0;
}