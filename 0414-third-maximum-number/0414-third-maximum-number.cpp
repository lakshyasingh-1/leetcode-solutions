class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st;

        for (int x : nums) {
            st.insert(x);
        }

        vector<int> result;

        for (int x : st) {
            result.push_back(x);
        }

        int n = result.size();

        if (n < 3)
            return result[n - 1];

        return result[n - 3];
    }
};