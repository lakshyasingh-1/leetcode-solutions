class Solution {
public:
    string digitSum(string s, int k) {

        while (s.length() > k) {
            string num = "";
            for (int i = 0; i < s.length(); i = i + k) {
                int sum = 0;
                for (int j = i; j < s.length() and j < i + k; j++) {
                    sum += s[j] - '0';
                }
                num += to_string(sum);
            }
            s = num;
        }
        return s;
    }
};