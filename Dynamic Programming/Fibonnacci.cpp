// #include <bits/stdc++.h>
// using namespace std;
// int fib(int n){
//     if(n<=1){
//         return n;
       
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main() {

//     int n;
//     cin>>n;
//     cout<<fib(n);

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int dp[100];
int fib(int n){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=fib(n-1)+fib(n-2);
    return dp[n];
}
int main() {

    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    cout<<fib(n);

    return 0;
}