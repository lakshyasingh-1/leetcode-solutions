class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int mid = nums[n/2];
        long mov = 0;
        for(auto num : nums){
            mov += abs(num - mid);
        }
        return mov;
    }
};