class Solution {
public:
    int firstUniqChar(string s) {
        map<int, int> um;

        for(auto c: s){
            um[c]++;
        }

        for(int i = 0; i<s.size(); i++){
            if(um[s[i]]==1) return i;
        }
        return -1;
    }
};