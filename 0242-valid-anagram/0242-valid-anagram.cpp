class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m) return false;
        map<char, int> sc,tc;
        for(int i = 0; i<n; i++){
            sc[s[i]]++,tc[t[i]]++;
        }
        if(sc==tc) return true;
        return false;
    }
};