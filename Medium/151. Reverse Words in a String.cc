class Solution {
public:
    string reverseWords(string s) {
        string result = "";

        int start = s.size() - 1;
        while (start >= 0) {
            // If this idx is space
            while (start >= 0 && s[start] == ' ') {
                start--;
            }
            if (start < 0) 
                    break;

            // Count word char num
            int word_length = 0;
            while (start >= 0 && s[start] != ' ') {
                word_length++;
                start--;
            }

            if (!result.empty())
                result += ' ';
            result += s.substr(start+1, word_length);
        }
        return result;   
    }
};