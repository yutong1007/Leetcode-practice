char* reverseVowels(char* s) {
    // use array to record vowels index (from left to right)
    int length = strlen(s);
    int* vowels_idx = malloc(length * sizeof(int));
    int vowels_count = 0;
    for (int i = 0; i < length; i++) {
        if (s[i] == 'A' ||
            s[i] == 'E' ||
            s[i] == 'I' ||
            s[i] == 'O' ||
            s[i] == 'U' ||
            s[i] == 'a' ||
            s[i] == 'e' ||
            s[i] == 'i' ||
            s[i] == 'o' ||
            s[i] == 'u') {
            vowels_idx[vowels_count] = i;
            vowels_count++;
        } 
    }

    // use index to swap vowels
    for (int j = 0; j < vowels_count / 2; j++) {
        char temp = s[vowels_idx[j]];
        s[vowels_idx[j]] = s[vowels_idx[vowels_count - 1 - j]];
        s[vowels_idx[vowels_count -1 - j]] = temp;
    }

    return s;
}