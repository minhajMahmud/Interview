#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
set<int>st;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(st.count(x)){
        //cout<<x<<endl;// duplicate value show koroar jonno
       cout<<"true";
       return 0;

    }
    st.insert(x);
}
for(auto x: st){
    cout<<x<<" ";
}
cout<<"false";
    return 0;
}
