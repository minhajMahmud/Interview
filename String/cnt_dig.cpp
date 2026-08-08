#include <bits/stdc++.h>
using namespace std;
int main() {

    string s;
    getline(cin,s);
    int cnt=0;
    for(char ch: s){
        if(isalpha(ch)){
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}