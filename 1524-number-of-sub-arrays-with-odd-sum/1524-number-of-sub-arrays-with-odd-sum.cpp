class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int mod = pow(10,9)+7;
        int even = 1, odd = 0, pri = 0, ans = 0;
        for(int n:arr){
            pri+=n;
            if(pri%2==0) ans+=odd, even +=1;
            else ans+=even, odd+=1;
            ans%=mod;
        }
        return ans;
    }
};