class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0;
        int r = h.size()-1;
        int maxArea = 0;
        while(l<r){
            int Area = min(h[l], h[r]) * (r-l);
            maxArea = max(maxArea, Area);
            if(h[l] < h[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxArea;
    }
};