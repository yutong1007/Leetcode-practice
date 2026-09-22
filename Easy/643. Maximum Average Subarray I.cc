class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int length = nums.size();
        
        // Count window sum (nums[0] + nums[1] + ...+ nums[k])
        int window_sum = 0;
        for (int i = 0; i < k; i++) {
            window_sum += nums[i];
        }

        // Slide window
        int maximum = window_sum;
        for (int i = k; i < length; i++) {
            window_sum = window_sum - nums[i-k] + nums[i];
            if (window_sum > maximum)
                maximum = window_sum;
        }

        return (double) maximum/k;
    }
};