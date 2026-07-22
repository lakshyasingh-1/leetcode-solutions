class Solution {
public:
    const int MOD = 1337;

    int modPow(int a, int b) {
        int res = 1;
        a %= MOD;

        while (b) {
            if (b & 1)
                res = (res * a) % MOD;
            a = (a * a) % MOD;
            b >>= 1;
        }

        return res;
    }

    int superPow(int a, vector<int>& b) {
        int ans = 1;

        for (int digit : b) {
            ans = (modPow(ans, 10) * modPow(a, digit)) % MOD;
        }

        return ans;
    }
};