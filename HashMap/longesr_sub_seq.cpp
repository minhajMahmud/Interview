#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    int longest=0;
    for(int x:st){
        if(st.count(x-1)==0){
            int current=x;
            int len=1;

            while(st.count(current+1)){
                current++;
                len++;
            }

            longest=max(longest,len);
        }
    }

    cout<<longest;
}