
class Solution {
public:
    void subset(int n, int i, vector<int>& v, vector<vector<int>>& ans, vector<int>& nums) {
        if (i == n) {
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        subset(n, i + 1, v, ans, nums);
        v.pop_back();
        subset(n, i + 1, v, ans, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> v;
        subset(n, 0, v, ans, nums);
        return ans;
    }
};
