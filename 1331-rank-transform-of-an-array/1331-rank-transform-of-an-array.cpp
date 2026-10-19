class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> nums(arr.begin(), arr.end());
        int n = arr.size();
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        int rank = 1;

        for (auto x : nums) {
            if (!mp.count(x)) {
                mp[x] = rank;
                rank++;
            }
        }

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            ans[i] = mp[arr[i]];
        }

        return ans;
    }
};