
class Solution {
public:
    int romanToInt(string s) {
        vector<pair<char, int>> v = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            int curr = 0, next = 0;

            for (int j = 0; j < v.size(); j++) {
                if (s[i] == v[j].first)
                    curr = v[j].second;

                if (i + 1 < s.length() && s[i + 1] == v[j].first)
                    next = v[j].second;
            }
            if (curr < next)
                ans -= curr;
            else
                ans += curr;
        }

        return ans;
    }
};
