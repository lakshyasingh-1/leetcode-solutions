class Solution {
public:
int maxLength(vector<int>& nums) {
        int n = nums.size();
        int l = 0;

        for (int i = 0; i < n; i++) {
            long long pro = 1, gcdi = 0, lcmi = 1;

            for (int j = i; j < n; j++) {
                pro *= nums[j];

                gcdi = gcd(gcdi, nums[j]);
                lcmi = lcm(lcmi, nums[j]);

                if (pro == lcmi * gcdi) {
                    l = max(l, j - i + 1);
                }
                if(pro >= 2520*gcdi*lcmi) break;
            
            }
        }

        return l;
    }
};