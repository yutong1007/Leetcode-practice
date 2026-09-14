class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        
        int min_length = min(word1.size(), word2.size());
        for (int i = 0; i < min_length; i++) {
            result += word1[i];
            result += word2[i];
        }

        // If word1 word2 not same length
        if (word1.size() > word2.size()) {
            for (int i = min_length; i < word1.size(); i++)
                result += word1[i];
        }
        if (word2.size() > word1.size()) {
            for (int i = min_length; i < word2.size(); i++)
                result += word2[i];
        }

        return result;
    }
};