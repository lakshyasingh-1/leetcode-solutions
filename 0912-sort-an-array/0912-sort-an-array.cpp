class Solution {
public:

void heapify(vector<int>& nums, int n, int i) {
    while (true) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && nums[left] > nums[largest])
            largest = left;

        if (right < n && nums[right] > nums[largest])
            largest = right;

        if (largest == i)
            break;

        swap(nums[i], nums[largest]);
        i = largest;
    }
}
    vector<int> sortArray(vector<int>& nums) {
        // priority_queue<int, vector<int>, greater<int>> pq;

        // for (int x : nums)
        //     pq.push(x);

        // for (int i = 0; i < nums.size(); i++) {
        //     nums[i] = pq.top();
        //     pq.pop();
        // }

        // return nums;


        // sort(nums.begin(), nums.end());
        // return nums;


        int n = nums.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(nums, n, i);
        }
        for (int i = n - 1; i > 0; i--) {
            swap(nums[0], nums[i]);
            heapify(nums, i, 0);
        }
        return nums;

    }
};