/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* result = malloc(candiesSize * sizeof(bool));
    *returnSize = candiesSize;

    // Find maximum in array
    int max = *(candies + 0);
    for (int i = 1; i < candiesSize; i++) {
        int x = *(candies + i);
        if (x > max)
            max = x; 
    }

    // Test each kids (test whether (max - candies) is > extracandies or not)
    for (int j = 0; j < candiesSize; j++) {
        int y = *(candies + j);
        if ((max - y) > extraCandies)
            result[j] = false;
        else
            result[j] = true;
    }

    return result;
}