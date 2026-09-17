class Solution {
public:
    string reverseVowels(string s) {
        
        // Two pointer (index)
        int left = 0;
        int right = s.size() - 1;

        // Reverse
        while (left < right) {
            // find closest vowels
            while (left < right && !is_vowels(s[left])) {
                left++;
            }
            while (left < right && !is_vowels(s[right])) {
                right--;
            }
            
            swap(s[left], s[right]);
            left++;
            right--;
        }

        return s;
    }
private:
    bool is_vowels(char c) {
        if (c == 'A' ||
            c == 'E' ||
            c == 'I' ||
            c == 'O' ||
            c == 'U' ||
            c == 'a' ||
            c == 'e' ||
            c == 'i' ||
            c == 'o' ||
            c == 'u') {
                return true;
            }
        return false; 
    }
};