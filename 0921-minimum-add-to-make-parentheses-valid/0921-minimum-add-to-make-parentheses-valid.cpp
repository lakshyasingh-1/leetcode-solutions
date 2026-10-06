class Solution {
public:
    int minAddToMakeValid(string s) {
        int op = 0, count = 0;
        for(auto &ch : s){
            if(ch == '(') op++;
            else if(op == 0) count++;
            else op--;
        }
        return op + count;
    }
};