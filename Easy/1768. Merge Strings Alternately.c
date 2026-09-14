char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    char *result = malloc(len1 + len2 + 1);

    int idx = 0;
    int result_idx = 0;
    while (1) {
        if (* (word1 + idx) == '\0') {
            strcpy(result + result_idx, word2 + idx);
            break;
        }
        else if (* (word2 + idx) == '\0') {
            strcpy(result + result_idx, word1 + idx);
            break;
        }
        else {
            * (result + result_idx) = * (word1 + idx);
            result_idx++;
            * (result + result_idx) = * (word2 + idx);
            result_idx++;
            idx++;
        }
    }
    return result;
}