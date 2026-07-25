class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int mx = nums[i];
            int mn = nums[i];
            for(int j = i; j<n; j++){
                mx = max(mx, nums[j]);
                mn = min(mn, nums[j]);
                sum += mx - mn;
            }
        }
        return sum;
    }
};