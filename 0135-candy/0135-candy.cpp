class Solution {
public:
    int candy(vector<int>& r) {
        int n = r.size();
        int count = 0;
        vector<int> v(n, 1);
        for(int i = 1; i<n; i++){
            if(r[i]>r[i-1]) v[i] = v[i-1]+1;
        }
        for(int i = n-1; i>0; i--){
            if(r[i-1]>r[i]) v[i-1] = max(v[i]+1, v[i-1]);
            count += v[i-1];
        }
        return count+v[n-1];
    }
};