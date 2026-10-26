class Solution {
public:
    int earliestFullBloom(vector<int>& pt, vector<int>& gt) {
        int n = pt.size();
        vector<pair<int, int>> s;
        for(int i = 0; i<n; i++){
            s.push_back({gt[i], pt[i]});
        }
        sort(s.rbegin(), s.rend());
        int bloom = 0;
        int days = 0;
        for(int i = 0; i<n; i++){
            int a = s[i].first;
            int b = s[i].second;
            bloom = bloom+b;
            int plant = bloom+a;
            days = max(days, plant);
        }
        return days;
    }
};