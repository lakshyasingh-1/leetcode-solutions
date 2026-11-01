class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> heap;
        int n = score.size();
        for (int i = 0; i < n; i++) {
            heap.push({score[i], i});
        }

        vector<string> ans(n);
        int count = 0;

        while(heap.size()>0){
            auto top = heap.top();
            heap.pop();
            count++;
            if(count == 1){
                ans[top.second] = "Gold Medal";
            }else if(count == 2){
                ans[top.second] = "Silver Medal";
            }else if(count == 3){
                ans[top.second] = "Bronze Medal";
            }else{
                ans[top.second] = to_string(count);
            }
        }
        return ans;
    }
};