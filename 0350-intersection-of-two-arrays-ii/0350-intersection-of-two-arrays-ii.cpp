class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> um;
        vector<int> ans;

        for(int num : nums1){
            um[num]++;
        }

        for(int num : nums2){
            if(um[num]>0){
                ans.push_back(num);
                um[num]--;
            }
        }
        return ans;
    }
};