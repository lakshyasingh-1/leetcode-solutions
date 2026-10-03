class Solution {
public:
    int longestValidParentheses(string s) {
        int ans = 0;
        vector<int> v = {-1};
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                v.push_back(i);
            else {
                v.pop_back();
                if(v.size()==0) v.push_back(i);
                else ans = max(ans, i-v.back());
            }
        }
        return ans;
    }
};