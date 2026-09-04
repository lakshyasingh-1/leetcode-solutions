class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> maxm(n);
        vector<int> minm(n);

        maxm[0] = nums[0];
        for (int i = 1; i < n; i++) {
            maxm[i] = max(maxm[i - 1], nums[i]);
        }

        minm[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            minm[i] = min(minm[i + 1], nums[i]);
        }

        for (int i = 0; i < n; i++) {
            if (maxm[i] - minm[i] <= k) {
                return i;
            }
        }
        return -1;
    }
};