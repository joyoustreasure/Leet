int majorityElement(int* nums, int numsSize) {
    int candidate = nums[0];
    int cnt = 1;


    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == candidate) {
            cnt++;
        } else {
            cnt--;
        }

        if (cnt == 0) {
            candidate = nums[i];
            cnt = 1;
        }
    }


    cnt = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == candidate) {
            cnt++;
        }
    }

    if (cnt > numsSize / 2) {
        return candidate;
    } else {
        return -1;  
    }
}
