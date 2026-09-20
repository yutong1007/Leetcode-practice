class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size();
        int idx = 0;

        while (idx <= length-1) {
            // find 0 index
            while (idx <= length - 1 && nums[idx] != 0) {
                idx++;
            }
            if (idx >= length)
                break;

            // find exchange number (closest)
            int next_num = idx;
            while (next_num <= length - 1 && nums[next_num] == 0) {
                next_num++;
            }
            if (next_num >= length)
                break;
        
            swap(nums[idx], nums[next_num]);
            idx++;
        }
    }
};