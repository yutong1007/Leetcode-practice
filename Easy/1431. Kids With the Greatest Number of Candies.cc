class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;

        // maximum candies of kids
        int max = *max_element(candies.begin(), candies.end());

        // test each one candies + extra candies will > max or not
        for (int i = 0; i < candies.size(); i++) {
            if ((candies[i] + extraCandies) >= max)
                result.push_back(true);
            else
                result.push_back(false);
        }

        return result;
    }
};