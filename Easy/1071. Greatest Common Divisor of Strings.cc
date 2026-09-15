class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string result;

        // No common part
        if ((str1 + str2) != (str2 + str1))
            return "";

        // GCD length
        int gcd_length = gcd(str1.size(), str2.size());
        result = str1.substr(0, gcd_length);
        
        return result;
    }
};