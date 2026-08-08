#include <bits/stdc++.h>
using namespace std;
int main() {
//unordered_set<int> st;
set<int> st;
st.insert(10);
st.insert(20);
st.insert(30);
st.erase(30);
for(auto x: st){
    cout<<x<<" ";
}
    

    return 0;
}