class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low = 0, high = s.length();
        vector<int> ans;
        for(auto ch: s){
            if(ch == 'I') ans.push_back(low), low++;
            else ans.push_back(high), high--;
        }
        ans.push_back(high);
        return ans;
    }
};