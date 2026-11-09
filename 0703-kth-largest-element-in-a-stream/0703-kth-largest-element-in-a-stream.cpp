class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> min;
    int uq;
    KthLargest(int k, vector<int>& nums) {
        uq = k;
        for(int i : nums) add(i);
    }

    int add(int val) {
        min.push(val);
        if(min.size()>uq) min.pop();
        return min.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */