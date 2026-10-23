class Solution {
public:
    bool isPowerOfThree(int n) {
         bool flag = false;
        for (int i = 0; i <= 19; i++) {
            int p = pow(3, i);
            if (p == n)
                flag = true;
        }
        return flag;
    }
};