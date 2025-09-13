#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    const int INF = 1e9; 
    vector<int> dp(amount + 1, INF);
    dp[0] = 0; 
    
    for (int i = 1; i <= amount; i++) {
        for (int coin : coins) {
            if (i - coin >= 0) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    return (dp[amount] == INF) ? -1 : dp[amount];
}

int main() {

    vector<int> coins = {1};
    int amount = 0;
    cout << coinChange(coins, amount) << endl; 

    return 0;
}
