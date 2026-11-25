class Solution {
public:
    void helper(vector<int>& nums, int i, int n, vector<vector<int>>& res){
        if (i == n) {
            res.push_back(nums);
            return;
        }
        for (int j = i; j < n; j++) {
            swap(nums[i], nums[j]);
            helper(nums, i+1, n, res);
            swap(nums[i], nums[j]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        helper(nums, 0, n, res);
        return res;
    }
};