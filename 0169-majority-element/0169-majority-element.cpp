class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        unordered_map<int, int>freq;
        for(int ele: arr){
            freq[ele]++;
        }
        for(auto &it: freq){
            if(it.second > n/2 ){
                return it.first;
            }
        }
        return -1;
    }
};