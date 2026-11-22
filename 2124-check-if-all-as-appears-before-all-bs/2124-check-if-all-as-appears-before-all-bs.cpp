class Solution {
public:
    bool checkString(string s) {
        bool check = false;
        for(char c: s){
            if(c == 'b') check = true;
            else if(check) return false;
        }
        return true;
    }
};