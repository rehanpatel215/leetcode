/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int n, int* r) {
    *r = n;
    
    // 2. Allocate memory for the result array
    int* res = (int*)malloc(n * sizeof(int));
    if (res == NULL) return NULL; // Safety check for malloc failure
    
    // 3. Initialize two pointers at both ends of the sorted array
    int left = 0;
    int right = n - 1;
    
    // 4. Fill the result array from back to front (largest to smallest)
    for (int i = n - 1; i >= 0; i--) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];
        
        if (leftSquare > rightSquare) {
            res[i] = leftSquare;
            left++;
        } else {
            res[i] = rightSquare;
            right--;
        }
    }
    
    return res;

}