int* sort(int* arr, int arrSize){
    for(int i=0;i<arrSize;i++){
        for (int j=i; j<arrSize;j++){
            if (arr[i]>arr[j]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    return arr;
}
bool canBeEqual(int* target, int targetSize, int* arr, int arrSize) {
    int * a = sort(target,targetSize);
    int* b = sort(arr, arrSize);
    for(int i =0; i<arrSize;i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}
