class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size();
        vector <int> result;
        vector <int> prefix;
        vector <int> suffix(length);

        // prefix
        prefix.push_back(nums[0]);
        for (int i = 1; i < length; i++) {
            prefix.push_back(prefix[i-1] * nums[i]);
        }

        // suffix
        suffix[length - 1] = nums[length - 1];
        for (int i = length - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i];
        }

        // answer[i] = i's prefix * i's suffix
        result.push_back(suffix[1]);
        for (int i = 1; i < length - 1; i++) {
            result.push_back(prefix[i-1] * suffix[i+1]);
        }
        result.push_back(prefix[length-2]);

        return result;
    }
};