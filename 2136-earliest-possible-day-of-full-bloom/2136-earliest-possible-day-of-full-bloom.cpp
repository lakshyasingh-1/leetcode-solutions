class Solution {
public:
    int earliestFullBloom(vector<int>& pt, vector<int>& gt) {
        vector<pair<int, int>> seeds;
        int n = pt.size();
        for (int i = 0; i < n; i++) {
            seeds.push_back({gt[i], pt[i]});
        }

        sort(seeds.rbegin(), seeds.rend());

        int start = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {

            int a = seeds[i].first;
            int b = seeds[i].second;

            start = start + b;
            int total = start + a;

            ans = max(ans, total);
        }
        return ans;
    }
};