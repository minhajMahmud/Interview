//recursive  solution
/*#include <bits/stdc++.h>
using namespace std;
int climb(int n){
    if(n==0||n==1) return 1;
    return climb(n-1)+climb(n-2);
}
int main() {

    int n;
    cin>>n;
    cout<<climb(n);

    return 0;
}
    */


    //dp solution


    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    
        int n;
        cin>>n;
        int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for (int i = 0; i < n; i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        cout<<dp[n];
        return 0;
    }