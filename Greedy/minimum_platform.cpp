#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int arrival[100];
    int departure[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arrival[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>departure[i];
    }
      sort(arrival, arrival + n);
    sort(departure, departure + n);
    int platform=1;
    int ans=1;
    int i=1,j=0;
    while (i<n&&j<n)
    {
        if(arrival[i]<=departure[j]){
            platform ++;
            if(platform>ans)
            ans=platform;
            i++;
        }else{
            platform--;
            j++;
        }
    }
    cout<<"MIninamum Platform="<<ans<<endl;
    

    return 0;
}