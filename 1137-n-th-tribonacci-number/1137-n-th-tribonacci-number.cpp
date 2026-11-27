class Solution {
public:
    int dfs(int n, vector<int>& dp){
        if(n == 0) return 0;
        if(n<=2) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = dfs(n-1,dp)+dfs(n-2, dp)+dfs(n-3, dp);
    }
    int tribonacci(int n) {
        vector<int> dp(n+1, -1);
        return dfs(n, dp);
    }
};