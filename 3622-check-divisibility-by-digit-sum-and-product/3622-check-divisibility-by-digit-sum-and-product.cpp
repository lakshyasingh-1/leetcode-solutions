class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum = 0;
        long long pro = 1;

        int temp = n;
        while(temp != 0){
            int rev = temp%10;
            sum = sum + rev;
            pro = pro * rev;
            temp/=10;
        }

        if(n%(sum+pro)==0) return true;
        else return false;
    }
};