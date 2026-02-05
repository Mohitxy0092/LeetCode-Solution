class Solution {
  public:
  static const int mod=1e9+7;
    int countFriendsPairings(int n) {
        if (n == 0) return 1;
    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;
    if (n >= 2) dp[2] = 2;
    
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] % mod +
                ((i - 1) % mod * dp[i - 2] % mod)) % mod;
    }
    return dp[n] % mod;
        
    }
};
