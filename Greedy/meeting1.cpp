//problem hocche ekjon ki sobgula meeting attend korte parbe??
#include <bits/stdc++.h>
using namespace std;
struct Meeting
{
    int start,end;

};
bool compare(Meeting a,Meeting b){
    return a.start<b.start;
}

int main() {
int n;
cin>>n;
vector<Meeting>arr(n);
for (int i = 0; i <n; i++)
{
    cin>>arr[i].start>>arr[i].end;
}
sort(arr.begin(),arr.end(),compare);
//bool possible=true;
for(int i=1;i<n;i++){
    if(arr[i].start<arr[i-1].end){
       // possible=false;
       cout<<"Not Possible";
        return 0;
    }
}
// if(possible)cout<<"Can attenc all meeting";
// else cout<<"Not possible";
cout<<"Can attenc all meeting";

    

    return 0;
}