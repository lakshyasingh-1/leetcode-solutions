class Solution {
public:
    int reverseBits(int n) {
        bitset<32> bits(n);

        int ans = 0;

        for (int i = 0; i < 32; i++) {
            ans = ans * 2 + bits[i];
        }

        return ans;
    }
};