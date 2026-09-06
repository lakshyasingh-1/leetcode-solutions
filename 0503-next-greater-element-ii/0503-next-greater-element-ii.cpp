class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> v(n,-1);
        for (int i = n - 1; i >= 0; i--) {
            st.push(arr[i]);
        }
        for (int i = n - 1; i >= 0; i--) {
            while (st.size() > 0 && st.top() <= arr[i])
                st.pop();
            if (st.size() == 0)
                v[i] = -1;
            else
                v[i] = st.top();
            st.push(arr[i]);
        }
        return v;
    }
};