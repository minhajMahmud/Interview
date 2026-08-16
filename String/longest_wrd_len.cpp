#include <bits/stdc++.h>
using namespace std;
int main() {

    string s;
    getline(cin,s);
    string word="";
    string longest="";
    for (int i = 0; i < s.length(); i++)
    {
        if(i==s.length()||s[i]==' '){
            if(word.length()>longest.length()){
                longest=word;

            }
            word="";
        }else{
            word+=s[i];
        }
    }
    cout<<longest.length();

    return 0;
}