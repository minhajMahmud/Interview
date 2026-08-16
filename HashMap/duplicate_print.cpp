#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    set<int>st;
    set<int>duplicate;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(st.count(x)){
            duplicate.insert(x);
        }else{
            st.insert(x);
        }
    }
    for(auto x:duplicate){
        cout<<x<<" ";
    }

    return 0;
}