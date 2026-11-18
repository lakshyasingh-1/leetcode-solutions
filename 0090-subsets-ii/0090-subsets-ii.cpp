
class Solution {
public:
    vector<vector<int>> result;

    void allUnique(int i, vector<pair<int,int>>& f, vector<int>& ans, int nf) {
        if(i == nf) {
            result.push_back(ans);
            return;
        }

        allUnique(i + 1, f, ans, nf);

        int val = f[i].first;
        int freq = f[i].second;

        for(int j = 1; j <= freq; j++) {
            ans.push_back(val);
            allUnique(i + 1, f, ans, nf);
        }

        for(int j = 1; j <= freq; j++) {
            ans.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        unordered_map<int, int> um;

        int n = nums.size();

        for(int i = 0; i < n; i++) {
            um[nums[i]]++;
        }

        vector<pair<int,int>> f;

        for(auto it = um.begin(); it != um.end(); it++) {
            f.push_back({it->first, it->second});
        }

        vector<int> ans;

        allUnique(0, f, ans, f.size());

        return result;
    }
};
