class Solution {
public:
    int fib(int n) {
        if (n == 0)
            return 0;
        int last = 0, curr = 1;
        for (int i = 2; i <= n; i++) {
            int temp = last;
            last = curr;
            curr = temp + curr;
        }
        return curr;
    }
};