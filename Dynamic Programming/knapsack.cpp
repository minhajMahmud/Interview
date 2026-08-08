#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, W;
    cin >> n >> W;

    vector<int> weight(n + 1), value(n + 1);

    for(int i = 1; i <= n; i++)
        cin >> weight[i];

    for(int i = 1; i <= n; i++)
        cin >> value[i];

    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for(int i = 1; i <= n; i++){

        for(int w = 0; w <= W; w++){

            if(weight[i] <= w){

                dp[i][w] = max(
                    value[i] + dp[i - 1][w - weight[i]],
                    dp[i - 1][w]
                );

            }else{

                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    cout << dp[n][W];
}