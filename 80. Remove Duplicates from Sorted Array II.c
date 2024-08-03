int removeDuplicates(int* nums, int numsSize) {
    int lookup[20001]={0};
    int j=0;
    for(int i=0;i<numsSize;i++){
        if(lookup[nums[i]+10000]<2){
            nums[j]=nums[i];
            j++;
            lookup[nums[i]+10000]++;
        }

    }
    return j;
}
