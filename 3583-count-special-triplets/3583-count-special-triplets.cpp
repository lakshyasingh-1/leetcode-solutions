class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int MOD = 1e9 + 7;

        unordered_map<long long, long long> left, right;

        for (int x : nums)
            right[x]++;

        long long ans = 0;

        for (int j = 0; j < nums.size(); j++) {
            right[nums[j]]--;

            long long target = 2LL * nums[j];

            long long leftCount = left[target];
            long long rightCount = right[target];

            ans = (ans + (leftCount * rightCount) % MOD) % MOD;

            left[nums[j]]++;
        }

        return ans;
    }
};