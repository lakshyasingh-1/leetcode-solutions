class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string val : tokens) {
            if (val != "+" && val != "-" && val != "*" && val != "/") {
                st.push(stoi(val));
            } else {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();

                if (val == "+")
                    st.push(b + a);
                else if (val == "-")
                    st.push(b - a);
                else if (val == "*")
                    st.push(b * a);
                else
                    st.push(b / a);
            }
        }

        return st.top();
    }
};
