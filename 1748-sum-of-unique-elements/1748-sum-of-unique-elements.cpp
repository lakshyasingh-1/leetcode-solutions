class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> mp;
        for(int num : nums){
            mp[num]++;
        }
        int sum = 0;
        for(auto &num : nums){
            if(mp[num] == 1){
                sum += num;
            }
        }
        return sum;
    }
};