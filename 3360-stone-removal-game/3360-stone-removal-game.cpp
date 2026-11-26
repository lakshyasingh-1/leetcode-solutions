class Solution {
public:
    bool canAliceWin(int n) {
        int num = 10, r = 0;
        while(n>=num){
            n = n-num;
            num--;
            r++;
        }
        return r%2==1?true:false;
    }
};