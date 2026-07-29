class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int, int> um;
        for(int num : nums){
            um[num]++;
        }

        for(auto &num : nums){
            if(num % 2 == 0 && um[num] == 1){
                return num;
            }
        }
        return -1;
    }
};