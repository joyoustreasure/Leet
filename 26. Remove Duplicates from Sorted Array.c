int removeDuplicates(int* nums, int numsSize) {
    int lookup[201]={0};
    int j=0;
    for(int i=0;i<numsSize;i++){
        if(lookup[nums[i]+100]==0){
            nums[j]=nums[i];
            j++;
            lookup[nums[i]+100]=1;
        }

    }
    return j;

}
