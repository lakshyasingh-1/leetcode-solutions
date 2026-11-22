class Solution {
public:
    void helper(int i, int sum, vector<int>& c, int t, vector<int>& comb, vector<vector<int>>& ans){
        if(sum == t) {
            ans.push_back(comb);
            return;
        }
        if(sum>t or i>=c.size()) return;
        comb.push_back(c[i]);
        helper(i, sum+c[i], c, t, comb, ans);
        comb.pop_back();
        helper(i+1, sum, c, t, comb, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>> ans;
        vector<int> comb;
        helper(0, 0, c, t, comb, ans);
        return ans;
    }
};