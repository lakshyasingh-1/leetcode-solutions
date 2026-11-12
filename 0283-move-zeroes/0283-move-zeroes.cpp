class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0, h = 0;
        while(h < nums.size()) {
            if(nums[h] != 0) {
                swap(nums[l], nums[h]);
                l++;
            }
            h++;
        }
    }
};