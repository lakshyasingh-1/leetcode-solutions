class Solution {
public:
    int nextNum(int n){
        int val = 0;
        while(n>0){
            int d = n % 10;
            val += d * d;
            n /= 10;
        }
        return val;
    }
    bool isHappy(int n) {
        set<int> num;
        while(num.find(n) == num.end()){
            num.insert(n);
            n = nextNum(n);
            if(n==1){
                return true;
            }
        }
        return false;
    }
};