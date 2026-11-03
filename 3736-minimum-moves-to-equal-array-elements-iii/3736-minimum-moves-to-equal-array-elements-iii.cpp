class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = 0, sum = 0, n = nums.size();
        for(int num : nums){
            maxi = max(maxi, num);
            sum+=num;
        }
        return maxi*n - sum;
    }
};