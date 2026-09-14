bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    if (n == 0) {
        return true;
    }
    
    // keep put n into array and check whether n == 0 or not
    for (int i = 0; i < flowerbedSize; i++) {
        // if this position = 0
        if (flowerbed[i] == 0) {
            // i is first (left == true) 
            bool left = (i == 0 || flowerbed[i - 1] == 0);
            // i is last (right == true)
            bool right = (i == flowerbedSize - 1 || flowerbed[i + 1] == 0);

            if (left && right) {
                flowerbed[i] = 1;
                n--;
                if (n == 0)
                    return true;
            }
        }
    }
    return false;
}