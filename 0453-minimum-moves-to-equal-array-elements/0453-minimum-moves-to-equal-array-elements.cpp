class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int mini = INT_MAX;
        for (int i : nums) {
            sum = sum + i;
            mini = min(mini, i);
        }
        return sum - nums.size() * mini;
    }
};