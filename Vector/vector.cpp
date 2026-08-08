#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
vector<int> v;
for (  int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    v.push_back(x);
   // v.insert(v.begin()+2,3);
   //v.erase(v.begin()+2);
}

 for(int i=0;i<v.size();i++){
    v.pop_back();
cout<<v[i]<<" ";
 }
        
    

    return 0;
}