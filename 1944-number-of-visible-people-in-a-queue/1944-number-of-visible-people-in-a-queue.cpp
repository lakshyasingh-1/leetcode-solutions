class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n);
        for(int i = n - 1; i>=0; i--){
            while (!st.empty() && arr[i] > st.top()) {
                st.pop();
                ans[i]++;
            }
            if(!st.empty()) ans[i]++;
            st.push(arr[i]);
        }
        return ans;
    }
};