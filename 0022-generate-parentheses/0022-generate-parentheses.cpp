class Solution {
public:
    void helper(int o, int c, string s, int n, vector<string> & ans){
        if(o==c and o+c == n*2){ 
            ans.push_back(s); 
            return;
        }
        if(o<n) helper(o+1, c, s+"(", n, ans);
        if(c<o) helper(o, c+1, s+")", n, ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(0, 0, "", n, ans);
        return ans;
    }
};