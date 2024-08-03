void rotate(int* nums, int numsSize, int k) {
    if (numsSize == 0 || k % numsSize == 0) {
        return; 
   }

    k = k % numsSize;

    int* tmp = (int*)malloc(k * sizeof(int));
    for (int i = 0; i < k; i++) {
        tmp[i] = nums[numsSize - k + i];
    }
    
    for (int i = numsSize - 1; i >= k; i--) {
        nums[i] = nums[i - k];
    }
    
    for (int i = 0; i < k; i++) {
        nums[i] = tmp[i];
    }

}
