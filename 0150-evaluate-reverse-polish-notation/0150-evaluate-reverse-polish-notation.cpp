class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> sk;

        for (string val : tokens) {

            if (val != "+" && val != "-" && val != "*" && val != "/") {
                sk.push(stoi(val));
            } else {
                int b = sk.top();
                sk.pop();
                int a = sk.top();
                sk.pop();

                if (val == "+") {
                    sk.push(a + b);
                } else if (val == "-") {
                    sk.push(a - b);
                } else if (val == "*") {
                    sk.push(a * b);
                } else {
                    sk.push(a / b);
                }
            }
        }

        return sk.top();
    }
};