class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_length = s.size();
        int t_length = t.size();

        // two pointer : one point to s each char, the other one use to search in t
        int s_pointer = 0;
        int t_pointer = 0;
        while (s_pointer < s_length && t_pointer < t_length) {
            // find this s char in t string position
            if (s[s_pointer] == t[t_pointer])
                s_pointer++;
            t_pointer++;
        }

        if (s_pointer == s_length)
            return true;
        else
            return false;
    }
};