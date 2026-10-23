class Solution {
public:
    bool isPowerOfFour(int n) {
        bool flag = false;
        for(int i = 0; i<=15; i++){
            int p = pow(4, i);
            if(p==n) flag = true;
        }
        return flag;
    }
};