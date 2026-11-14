class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX;
        int curr = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            curr = 0;
            for(int j = i; j<n; j++){
                curr += nums[j];
                if((j-i+1)>=l and (j-i+1)<=r and curr>0) ans = min(ans,curr);
            }
        }
        if(ans == INT_MAX) return -1;
        else return ans;
    }
};