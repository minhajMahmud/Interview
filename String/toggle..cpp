#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
getline(cin,s);
for(char &ch :s){
    if(islower(ch)){
        ch=toupper(ch);
    }else{
        ch=tolower(ch);
    }
}
    
cout<<s;
    return 0;
}