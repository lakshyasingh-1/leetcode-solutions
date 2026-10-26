class Solution {
public:
    int earliestFullBloom(vector<int>& pt, vector<int>& gt) {
        int n = pt.size();
        vector<pair<int, int>> seed;
        for (int i = 0; i < n; i++) {
            seed.push_back({gt[i], pt[i]});
        }
        sort(seed.rbegin(), seed.rend());

        int start = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int a = seed[i].first;
            int b = seed[i].second;

            start+=b;
            int total=start+a;

            ans = max(ans, total);
        }
        return ans;
    }
};