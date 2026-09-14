char* gcdOfStrings(char* str1, char* str2) {
    char* result;
    char* string;
    int large_length;
    int small_length;
    if (strlen(str1) > strlen(str2)) {
        string = str2;
        large_length = strlen(str1);
        small_length = strlen(str2);
    }
    else {
        string = str1;
        large_length = strlen(str2);
        small_length = strlen(str1);
    }
    result = malloc(small_length + 1);
    result[0] = '\0';

    // Collect prefix (only longer string)
    char Prefix_sum[small_length][small_length + 1];
    for (int i = 0; i < small_length; i++) {
        strncpy(Prefix_sum[i], string, i + 1);
        Prefix_sum[i][i + 1] = '\0';
    }

    // Test each prefix
    for (int j = 0; j < small_length; j++) {
        char* Prefix = Prefix_sum[j];
        bool is_divisor = 1;
        // test prefix and string each position
        if (strlen(str1) % strlen(Prefix) != 0 || strlen(str2) % strlen(Prefix) != 0) {
            is_divisor = 0;
        }
        for (int k = 0; k < strlen(str1); k++) {
            if (str1[k] != Prefix[k % strlen(Prefix)])
                is_divisor = 0;
        }
        for (int h = 0; h < strlen(str2); h++) {
            if (str2[h] != Prefix[h % strlen(Prefix)])
                is_divisor = 0;
        }
        if (is_divisor == 1 && strlen(Prefix) > strlen(result))
            strcpy(result, Prefix);
    }
    
    return result;
}