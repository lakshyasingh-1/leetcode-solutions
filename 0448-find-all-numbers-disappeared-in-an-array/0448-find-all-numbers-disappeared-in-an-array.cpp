class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        set<int> set;
        for (int num : nums) {
            set.insert(num);
        }
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            if (set.find(i) == set.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};