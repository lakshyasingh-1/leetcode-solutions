class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0; i<n; i++){
            int count = 0;
            for(int j = 0; j<m; j++){
                if(mat[i][j]==1) count++;
            }
            heap.push({count, i});
        }
        vector<int> weak(k);
        for(int i = 0; i<k; i++){
            weak[i] = heap.top().second;
            heap.pop();
        }
        return weak;
    }
};