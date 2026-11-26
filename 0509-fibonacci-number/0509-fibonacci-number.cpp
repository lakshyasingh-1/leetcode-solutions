class Solution {
public:
    int fib(int n) {
        int dp[3];
        if (n == 0 or n == 1)
            return n;
        dp[0] = 0;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i%3] = dp[(i - 1)%3] + dp[(i - 2)%3];
        }
        return dp[n%3];
    }
};